/*
** push_swap.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Jan  4 18:51:44 2013 louis-philippe baron
** Last update Sun Jan  6 23:23:22 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

int		push_swap(int ac, char **av)
{
  t_list	*l_a;
  t_list	*l_b;
  int		i;

  if (check_validity(ac, av) == ERROR)
    return (ERROR);
  if ((l_a = do_list_a(ac, av)) == NULL)
    return (ERROR);
  l_b = NULL;
  rev_list(&l_a);
  if (give_weight(l_a) == ERROR)
    {
      free_list(l_a);
      my_putstr("List should not contain same number twice.\n");
      return (ERROR);
    }
  i = 0;
  if (av[1][0] == '-' && av[1][1] == 'v' && av[1][2] == '\0')
    i = 1;
  l_a = sort_list(l_a, l_b, i);
  free_list(l_a);
  return (0);
}
