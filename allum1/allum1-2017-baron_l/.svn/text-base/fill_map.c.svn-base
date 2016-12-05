/*
** fill_map.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb  6 18:09:16 2013 louis-philippe baron
** Last update Thu Feb  7 15:22:48 2013 louis-philippe baron
*/

#include	"hallum.h"

static int		pipes(char **map)
{
  int		j;
  int		i;
  int		size;
  int		c;

  j = 3;
  size = 7;
  i = 0;
  while (j >= 0)
    {
      c = i;
      while (c < size)
	{
	  map[j][c] = '|';
	  c++;
	}
      i++;
      size--;
      j--;
    }
  return (0);
}

int		fill_map(char **map)
{
  int		i;
  int		j;

  j = 0;
  while (map[j])
    {
      i = 0;
      while (i < 7)
	{
	  map[j][i] = ' ';
	  i++;
	}
      map[j][i] = '\0';
      j++;
    }
  pipes(map);
  return (0);
}
