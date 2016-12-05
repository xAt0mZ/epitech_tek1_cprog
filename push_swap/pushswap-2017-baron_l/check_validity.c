/*
** check_validity.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec 19 10:43:41 2012 louis-philippe baron
** Last update Sun Jan  6 23:14:29 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

static int	check_long(int ac, char **av)
{
  int		i;
  int		j;

  j = 1;
  while (j < ac)
    {
      i = 0;
      while (av[j][i])
	i++;
      if ((i == 11 && av[j][0] == '-') || i == 10)
	{
	  if (check_max(av[j]) == ERROR)
	    return (ERROR);
	}
      else if ((i > 10 && av[j][0] != '-') || (i > 11 && av[j][0] == '-'))
	return (ERROR);
      j++;
    }
  return (0);
}

static int	check_content(int ac, char **av)
{
  int		i;
  int		k;

  if (av[1][0] == '-' &&  av[1][1] == 'v' && av[1][2] == '\0')
    k = 2;
  else
    k = 1;
  while (k < ac)
    {
      i = 0;
      if (av[k][0] == '-')
	i++;
      while (av[k][i])
	{
	  if (!(av[k][i] >= '0' && av[k][i] <= '9'))
	    return (ERROR);
	  i++;
	}
      k++;
    }
  return (0);
}

int		check_validity(int ac, char **av)
{
  if (ac == 2)
    return (0);
  if (check_content(ac, av) == ERROR)
    {
      my_putstr("List should only contain numbers.\n");
      return (ERROR);
    }
  if (check_long(ac, av) == ERROR)
    {
      my_putstr("One or more numbers are in overflow.\n");
      return (ERROR);
    }
  return (0);
}
