/*
** check_args.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 29 15:13:27 2013 louis-philippe baron
** Last update Sat Mar 30 18:23:37 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	chmod_args(char *str, t_list *tmp, int k, t_list *list)
{
  int		mode;

  if (str[0] == 'r')
    {
      mode = T_REG;
      tmp->oct_size += 1;
    }
  else if (str[0] == DIRECT_CHAR)
    {
      mode = T_DIR;
      tmp->oct_size += fill_oct_size(tmp, DIR_SIZE);
    }
  else
    {
      mode = T_IND;
      tmp->oct_size += fill_oct_size(tmp, IND_SIZE);
    }
  if ((mode & op_tab[tmp->op_tab_line].type[k]) == 0)
    return (INVALID);
  if (check_type(str, list, tmp) == INVALID)
    return (INVALID);
  return (0);
}

static int	args(t_list *tmp, t_list *list)
{
  char		**tab;
  int		k;

  if ((tab = cut_args(tmp->args)) == NULL)
    return (ERROR);
  k = 0;
  while (tab[k])
    k++;
  if (k != op_tab[tmp->op_tab_line].nbr_args)
    return (INVALID);
  k = 0;
  while (tab[k])
    {
      if (chmod_args(tab[k], tmp, k, list) == INVALID)
	return (INVALID);
      k++;
    }
  free_tab(tab);
  return (0);
}

static int	check_this(t_list *tmp, t_list *list)
{
  int		ret;

  if (tmp->label == 1)
    return (0);
  while (op_tab[tmp->op_tab_line].code)
    {
      if (my_match(tmp->command, op_tab[tmp->op_tab_line].mnemonique) == 0)
	{
	  ret = args(tmp, list);
	  return (ret);
	}
      tmp->op_tab_line++;
    }
  return (0);
}

int		check_args(t_list *list)
{
  t_list	*tmp;
  int		ret;

  tmp = list;
  while (tmp)
    {
      ret = check_this(tmp, list);
      if (tmp->label == 0 && tmp->op_tab_line != 0 && tmp->op_tab_line != 8
	  && tmp->op_tab_line != 11 && tmp->op_tab_line != 14)
	tmp->oct_size += 1;
      if (ret == INVALID)
	my_put_error(SYNTAX_ERROR, tmp->pos);
      if (ret == INVALID || ret == ERROR)
	return (ret);
      tmp = tmp->next;
    }
  return (0);
}
