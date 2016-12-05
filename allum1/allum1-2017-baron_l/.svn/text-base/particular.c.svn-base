/*
** particular.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Feb  8 17:18:42 2013 louis-philippe baron
** Last update Tue Feb 12 14:07:12 2013 louis-philippe baron
*/

#include	"hallum.h"

static int	get_line_size(char *str)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  while (str[i])
    {
      if (str[i] == '|')
	nb++;
      i++;
    }
  return (nb);
}

int		particular(t_map *map)
{
  int		i;
  int		nb;
  int		line;

  i = 0;
  nb = 0;
  while (i < 4)
    {
      if (map->config[i] == 1)
	nb++;
      i++;
    }
  line = get_line_size(map->map[map->line]);
  if (nb % 2 == 0)
    map->matches = line - 1;
  else
    map->matches = line;
  return (0);
}
