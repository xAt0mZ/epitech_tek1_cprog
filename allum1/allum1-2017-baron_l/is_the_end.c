/*
** is_the_end.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb  6 20:29:26 2013 louis-philippe baron
** Last update Thu Feb  7 14:37:17 2013 louis-philippe baron
*/

#include	"hallum.h"

int		is_the_end(char **map)
{
  int		i;
  int		j;
  int		nb;

  j = 0;
  nb = 0;
  while (map[j])
    {
      i = 0;
      while (map[j][i])
	{
	  if (map[j][i] == '|')
	    nb++;
	  i++;
	}
      j++;
    }
  if (nb)
    return (ERROR);
  return (0);
}
