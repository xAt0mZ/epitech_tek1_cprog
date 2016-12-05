/*
** main.c for lem_in in /home/baron_l//local/rendu/projets/c_prog_elem/lem_in/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Apr 10 10:29:19 2013 louis-philippe baron
** Last update Wed Apr 10 11:10:28 2013 louis-philippe baron
*/

#include	"hlemin.h"

static int	lem_in()
{
  char		**file;
  int		ret;

  if ((file = get_file()) == NULL)
    {
      my_putstr("Problem in memory allocation while getting file\n");
      return (ERROR);
    }
  /* ret = check_validity(file); */
  /* if (ret == ERROR || ret == INVALID) */
  /*   return (ret); */
  show_tab(file);
  free_tab(file);
  return (0);
}

int		main(int ac, char **av)
{
  int		ret;

  if (ac == 1)
    {
      ret = lem_in();
      return (ret);
    }
  else
    my_putstr("Usage : ./lem_in < map(.txt)\n");
  return (0);
}
