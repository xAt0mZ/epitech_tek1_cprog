/*
** get_map.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb  6 17:37:52 2013 louis-philippe baron
** Last update Thu Feb  7 15:38:31 2013 louis-philippe baron
*/

#include	"hallum.h"

char		**get_map()
{
  char		**res;
  int		j;

  if ((res = malloc(5 * sizeof(char *))) == NULL)
    {
      my_putstr("Malloc failed while generating map.\n", 2);
      return (NULL);
    }
  j = 0;
  while (j < 4)
    {
      if ((res[j] = malloc(8 * sizeof(char))) == NULL)
	{
	  my_putstr("Malloc failed while generating map.\n", 2);
	  return (NULL);
	}
      j++;
    }
  res[j] = NULL;
  return (res);
}
