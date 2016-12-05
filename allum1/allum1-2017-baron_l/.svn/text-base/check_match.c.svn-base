/*
** check_match.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Feb  7 14:54:37 2013 louis-philippe baron
** Last update Thu Feb  7 17:39:40 2013 louis-philippe baron
*/

#include	"hallum.h"

int		check_match_nb(int nb, t_map *map)
{
  int		i;
  int		match;
  char		**tmp;

  tmp = map->map;
  i = 0;
  match = 0;
  while (tmp[map->line][i])
    {
      if (tmp[map->line][i] == '|')
	match++;
      i++;
    }
  if (nb == 0 || match < nb)
    {
      my_putstr("Please enter a number less or equal ", 1);
      my_putstr("to maximum matches on line choosen.\n", 1);
      return (ERROR);
    }
  return (0);
}
