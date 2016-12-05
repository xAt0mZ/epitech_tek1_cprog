/*
** main.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Feb  5 18:14:39 2013 louis-philippe baron
** Last update Tue Feb  5 19:53:52 2013 louis-philippe baron
*/

#include	"hallum.h"

int		allum(int ac, char **av)
{
  t_conf	conf;

  if (check_args(ac, av, &conf) == ERROR)
    return (ERROR);
  printf("Ok\n");
  return (0);
}

int		main(int ac, char **av)
{
  if (ac)
    {
      if (allum(ac, av) == ERROR)
	return (ERROR);
    }
  else
    my_putstr("./allum1 --help for usage\n");
  return (0);
}
