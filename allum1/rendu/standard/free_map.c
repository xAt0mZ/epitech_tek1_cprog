/*
** free_map.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb  6 20:12:51 2013 louis-philippe baron
** Last update Wed Feb  6 20:13:39 2013 louis-philippe baron
*/

#include	"hallum.h"

int		free_map(char **map)
{
  int		j;

  j = 0;
  while (map[j])
    {
      free(map[j]);
      j++;
    }
  free(map);
  return (0);
}
