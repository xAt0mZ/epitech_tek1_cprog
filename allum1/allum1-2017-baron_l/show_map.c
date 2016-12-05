/*
** show_map.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb  6 20:11:32 2013 louis-philippe baron
** Last update Thu Feb  7 17:25:40 2013 louis-philippe baron
*/

#include	"hallum.h"

int		show_map(char **map)
{
  int		i;
  int		j;

  j = 0;
  my_putstr("\n\n", 1);
  while (map[j])
    {
      i = 0;
      my_putstr("line ", 1);
      my_putnbr(j + 1);
      my_putstr("\t : ", 1);
      while (map[j][i])
	{
	  my_putchar(map[j][i], 1);
	  i++;
	}
      my_putchar('\n', 1);
      j++;
    }
  return (0);
}
