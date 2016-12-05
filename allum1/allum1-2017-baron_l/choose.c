/*
** choose.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Feb  8 12:53:31 2013 louis-philippe baron
** Last update Tue Feb 12 14:08:15 2013 louis-philippe baron
*/

#include	"hallum.h"

static int	get_config(t_map *map)
{
  int		i;
  int		j;
  int		nb;

  j = 0;
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
      map->config[j] = nb;
      j++;
    }
  return (0);
}

static int	is_particular(t_map *map)
{
  int		i;
  int		nb;

  get_config(map);
  i = 0;
  nb = 0;
  while (i < 4)
    {
      if (map->config[i] > 1)
	{
	  nb++;
	  map->line = i;
	}
      i++;
    }
  if (nb == 1)
    return (0);
  return (ERROR);
}

int		choose(int situ, t_map *map)
{
  if (is_particular(map) == ERROR)
    {
      if (situ % 2 == 0)
	even(situ, map);
      else
	uneven(situ, map);
    }
  else
    particular(map);
  delete_matches(map->map, map->line, map->matches);
  return (0);
}
