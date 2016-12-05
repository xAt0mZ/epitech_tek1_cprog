/*
** find_line.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Feb  8 13:27:54 2013 louis-philippe baron
** Last update Fri Feb  8 14:20:00 2013 louis-philippe baron
*/

#include	"hallum.h"

int		convert_line(char **map, int n)
{
  int		i;
  int		j;
  int		nb;

  j = 0;
  while (map[j])
    {
      i = 0;
      nb = 0;
      while (map[j][i])
	{
	  if (map[j][i] == '|')
	    nb++;
	  i++;
	}
      if (nb == n)
	return (j);
      j++;
    }
  return (0);
}

int		find_line(char **map, int n)
{
  int		i;
  int		j;
  int		nb;

  j = 0;
  while (map[j])
    {
      i = 0;
      nb = 0;
      while (map[j][i])
	{
	  if (map[j][i] == '|')
	    nb++;
	  i++;
	}
      if (nb == n)
	return (n);
      j++;
    }
  return (ERROR);
}
