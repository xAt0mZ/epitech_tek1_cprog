/*
** main.c for bistromathique in /home/parejo_p//bistromatique
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Wed Oct 31 12:19:13 2012 pelayo parejopagador
** Last update Sat Nov 10 17:54:24 2012 pelayo parejopagador
*/

#include "h_list.h"

int	main(int ac, char **av)
{
  t_list **begin;
  t_list *fpointer;

  if (ac == 3)
    {
      fpointer = my_params_in_list(av[1], av[2]);
      begin = &fpointer;
      my_double_link_list(begin);
      my_show_list(*begin);
      /*      priority_manager(begin, av[2], av[3], 0); /* av[3] == av[1] */
    }
  return (0);
}
