/*
** parity.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Feb  8 12:59:24 2013 louis-philippe baron
** Last update Fri Feb  8 13:28:07 2013 louis-philippe baron
*/

#include	"hallum.h"

int		even(int situ, t_map *map)
{
  int		(*tab[4])(t_map *);
  int		index;

  index = situ / 2;
  tab[0] = &situ_0;
  tab[1] = &situ_2;
  tab[2] = &situ_4;
  tab[3] = &situ_6;
  tab[index](map);
  return (0);
}

int		uneven(int situ, t_map *map)
{
  int		(*tab[4])(t_map *);
  int		index;

  index = (situ - 1) / 2;
  tab[0] = &situ_1;
  tab[1] = &situ_3;
  tab[2] = &situ_5;
  tab[3] = &situ_7;
  tab[index](map);
  return (0);
}
