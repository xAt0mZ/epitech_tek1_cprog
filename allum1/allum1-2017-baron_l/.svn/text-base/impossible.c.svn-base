/*
** impossible.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Feb 12 09:54:47 2013 louis-philippe baron
** Last update Tue Feb 12 14:11:16 2013 louis-philippe baron
*/

#include	"hallum.h"

static int	get_longest_line(t_map *map, int j, int max)
{
  int		i;
  int		nb;

  while (map->map[j])
    {
      i = 0;
      nb = 0;
      while (map->map[j][i])
	{
	  if (map->map[j][i] == '|')
	    nb++;
	  i++;
	}
      if (nb > max)
	{
	  max = nb;
	  map->line = j;
	}
      j++;
    }
  return (max);
}

int		impossible(t_map *map, int situ)
{
  int		line;

  line = get_longest_line(map, 0, 0);
  map->matches = line - (line ^ situ);
  return (0);
}
