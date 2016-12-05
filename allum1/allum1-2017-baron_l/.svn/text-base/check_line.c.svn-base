/*
** check_line.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Feb  7 13:21:51 2013 louis-philippe baron
** Last update Thu Feb  7 14:58:55 2013 louis-philippe baron
*/

#include	"hallum.h"

int		check_line_exist(int nb, char **map)
{
  int		i;
  int		line;

  if (!(nb >= 0 && nb < 4))
    {
      my_putstr("Please choose an existing line.\n", 1);
      return (ERROR);
    }
  i = 0;
  line = 0;
  while (map[nb][i])
    {
      if (map[nb][i] == '|')
	line++;
      i++;
    }
  if (line == 0)
    {
      my_putstr("Please choose a non-empty line.\n", 1);
      return (ERROR);
    }
  return (0);
}
