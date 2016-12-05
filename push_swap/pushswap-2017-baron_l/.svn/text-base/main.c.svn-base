/*
** main.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec 19 10:11:52 2012 louis-philippe baron
** Last update Fri Jan  4 18:52:33 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

int		main(int ac, char **av)
{
  if (ac >= 2)
    {
      if (push_swap(ac, av) == ERROR)
	return (ERROR);
    }
  else
    {
      my_putstr("\nUsage : ./push_swap [list]\nWith [list] a list of 2 ");
      my_putstr("or more numbers, not containing twice same elements.\n\n");
      return (ERROR);
    }
  return (0);
}
