/*
** line_selection.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Feb  7 13:10:28 2013 louis-philippe baron
** Last update Thu Feb  7 14:45:04 2013 louis-philippe baron
*/

#include	"hallum.h"

int		line_selection(char *cmd, t_map *map)
{
  int		nb;

  if (check_content(cmd) == ERROR)
    {
      my_putstr("Please only enter positiv numbers.\n", 1);
      return (ERROR);
    }
  nb = my_getnbr(cmd) - 1;
  if (check_line_exist(nb, map->map) == ERROR)
    return (ERROR);
  else
    map->line = nb;
  return (0);
}
