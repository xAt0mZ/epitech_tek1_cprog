/*
** check_labels.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 29 14:43:00 2013 louis-philippe baron
** Last update Sun Mar 31 17:34:28 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	check_this(t_list *list)
{
  int		j;
  int		i;

  j = 0;
  while (op_tab[j].code)
    {
      if (my_match(list->command, op_tab[j].mnemonique) == 0)
	return (0);
      j++;
    }
  if (list->args)
    return (INVALID);
  list->label = 1;
  list->oct_size = 0;
  i = 0;
  while (list->command[i])
    i++;
  if (list->command[i - 1] == LABEL_CHAR)
    list->command[i - 1] = '\0';
  return (0);
}

int		check_labels(t_list *list)
{
  t_list	*tmp;

  tmp = list->next->next;
  while (tmp)
    {
      if (check_this(tmp) == INVALID)
	{
	  my_put_error(SYNTAX_ERROR, tmp->pos);
	  my_putstr("Please write labels alone on lines\n");
	  return (INVALID);
	}
      tmp = tmp->next;
    }
  return (0);
}
