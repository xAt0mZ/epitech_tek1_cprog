/*
** delete_matches.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Feb  7 15:11:07 2013 louis-philippe baron
** Last update Fri Feb  8 13:30:59 2013 louis-philippe baron
*/

#include	"hallum.h"

int		delete_matches(char **map, int line, int matches)
{
  int		i;
  int		nb;

  i = 0;
  nb = 0;
  while (map[line][i] == ' ')
    i++;
  while (nb < matches)
    {
      map[line][i] = ' ';
      i++;
      nb++;
    }
  return (0);
}
