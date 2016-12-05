/*
** w_args.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar 27 15:23:09 2013 louis-philippe baron
** Last update Sun Mar 31 19:54:10 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	need_code(t_list *tmp)
{
  if (tmp->op_tab_line == 0 || tmp->op_tab_line == 8
      || tmp->op_tab_line == 11 || tmp->op_tab_line == 14)
    return (ERROR);
  return (0);
}

int		w_args(t_list *list, t_all *all)
{
  char		**av;
  int		k;

  if ((av = cut_args(list->args)) == NULL)
    return (ERROR);
  if (need_code(list) == 0)
    code_octet(all->fd, av);
  k = 0;
  while (av[k])
    {
      if ((av[k][0] == 'r' && w_register(all->fd, av[k]) == ERROR)
	  || (av[k][0] == DIRECT_CHAR && w_direct(all, av[k], list) == ERROR)
	  || (av[k][0] != 'r' && av[k][0] != DIRECT_CHAR
	      && w_indirect(all, av[k], list) == ERROR))
	return (ERROR);
      k++;
    }
  free_tab(av);
  return (0);
}
