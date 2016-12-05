/*
** even.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Feb  8 13:25:55 2013 louis-philippe baron
** Last update Tue Feb 12 14:09:07 2013 louis-philippe baron
*/

#include	"hallum.h"

int		situ_0(t_map *map)
{
  int		i;
  int		j;
  char		**tmp;

  j = 0;
  tmp = map->map;
  while (tmp[j])
    {
      i = 0;
      while (tmp[j][i])
	{
	  if (tmp[j][i] == '|')
	    {
	      map->line = j;
	      map->matches = 1;
	      return (0);
	    }
	  i++;
	}
      j++;
    }
  return (0);
}

int		situ_2(t_map *map)
{
  int		line;

  if ((line = find_line(map->map, 2)) == ERROR)
    if ((line = find_line(map->map, 3)) == ERROR)
      if ((line = find_line(map->map, 6)) == ERROR)
	if ((line = find_line(map->map, 7)) == ERROR)
	  impossible(map, 2);
  if (line != ERROR)
    {
      map->matches = 2;
      map->line = convert_line(map->map, line);
    }
  return (0);
}

int		situ_4(t_map *map)
{
  int		line;

  if ((line = find_line(map->map, 4)) == ERROR)
    if ((line = find_line(map->map, 5)) == ERROR)
      if ((line = find_line(map->map, 6)) == ERROR)
	if ((line = find_line(map->map, 7)) == ERROR)
	  impossible(map, 4);
  if (line != ERROR)
    {
      map->matches = 4;
      map->line = convert_line(map->map, line);
    }
  return (0);
}

int		situ_6(t_map *map)
{
  int		line;

  if ((line = find_line(map->map, 4)) == ERROR)
    if ((line = find_line(map->map, 5)) == ERROR)
      if ((line = find_line(map->map, 6)) == ERROR)
	if ((line = find_line(map->map, 7)) == ERROR)
	  impossible(map, 6);
  if (line != ERROR)
    {
      if (line == 4 || line == 5)
	map->matches = 2;
      else
	map->matches = 6;
      map->line = convert_line(map->map, line);
    }
  return (0);
}
