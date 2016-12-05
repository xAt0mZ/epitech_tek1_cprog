/*
** uneven.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Feb  8 13:27:21 2013 louis-philippe baron
** Last update Tue Feb 12 14:09:23 2013 louis-philippe baron
*/

#include	"hallum.h"

int		situ_1(t_map *map)
{
  int		line;

  if ((line = find_line(map->map, 1)) == ERROR)
    if ((line = find_line(map->map, 3)) == ERROR)
      if ((line = find_line(map->map, 5)) == ERROR)
	if ((line = find_line(map->map, 7)) == ERROR)
	  impossible(map, 1);
  if (line != ERROR)
    {
      map->matches = 1;
      map->line = convert_line(map->map, line);
    }
  return (0);
}

int		situ_3(t_map *map)
{
  int		line;

  if ((line = find_line(map->map, 2)) == ERROR)
    if ((line = find_line(map->map, 3)) == ERROR)
      if ((line = find_line(map->map, 6)) == ERROR)
	if ((line = find_line(map->map, 7)) == ERROR)
	  impossible(map, 3);
  if (line != ERROR)
    {
      if (line == 2 || line == 6)
	map->matches = 1;
      else
	map->matches = 3;
      map->line = convert_line(map->map, line);
    }
  return (0);
}

int		situ_5(t_map *map)
{
  int		line;

  if ((line = find_line(map->map, 4)) == ERROR)
    if ((line = find_line(map->map, 5)) == ERROR)
      if ((line = find_line(map->map, 6)) == ERROR)
	if ((line = find_line(map->map, 7)) == ERROR)
	  impossible(map, 5);
  if (line != ERROR)
    {
      if (line == 4 || line == 6)
	map->matches = 3;
      else
	map->matches = 5;
      map->line = convert_line(map->map, line);
    }
  return (0);
}

int		situ_7(t_map *map)
{
  int		line;

  if ((line = find_line(map->map, 4)) == ERROR)
    impossible(map, 7);
  if (line != ERROR)
    {
      map->matches = 1;
      map->line = convert_line(map->map, line);
    }
  return (0);
}
