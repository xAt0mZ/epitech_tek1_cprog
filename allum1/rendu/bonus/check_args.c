/*
** check_args.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Feb  5 18:23:05 2013 louis-philippe baron
** Last update Tue Feb  5 19:57:19 2013 louis-philippe baron
*/

#include	"hallum.h"

int		check_opt(int ac, char **av, t_conf *conf)
{
  if (ac == 3)
    check_3(av, conf);
  else if (ac == 5)
    check_5(av, conf);
  else if (ac == 7)
    check_7(av, conf);
  return (ERROR);
}

int		check_args(int ac, char **av, t_conf *conf)
{
  if (ac == 1)
    conf->row = 4;
  else if (ac == 2 && my_strcmp(av[1], "--help") == 0)
    {
      display_help();
      return (ERROR);
    }
  else if (ac == 3 || ac == 5 || ac == 7)
    {
      if (check_opt(ac, av, conf) == ERROR)
	{
	  my_putstr("./allum1 --help for usage\n");
	  return (ERROR);
	}
    }
  else
    {
      my_putstr("./allum1 --help for usage\n");
      return (ERROR);
    }
  conf->max = (conf->row * 4) - 1;
  return (0);
}
