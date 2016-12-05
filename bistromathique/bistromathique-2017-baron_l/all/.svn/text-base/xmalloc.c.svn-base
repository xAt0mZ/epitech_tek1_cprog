/*
** xmalloc.c for malloc in /home/parejo_p/bistromathique
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Fri Nov  9 13:44:39 2012 pelayo parejopagador
** Last update Sun Nov 11 17:05:33 2012 pelayo parejopagador
*/

#include <stdlib.h>
#include "h_list.h"

void	*xmalloc(unsigned int i)
{
  void	*tmp;

  tmp = malloc(i);
  if (tmp == NULL)
    {
      my_putstr("Sorry, could not alloc\n");
      exit(3);
    }
  return (tmp);
}
