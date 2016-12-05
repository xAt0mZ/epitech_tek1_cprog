/*
** my_strdup.c for bistromathique in /home/parejo_p//Jour_07
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Wed Oct 10 09:48:41 2012 pelayo parejopagador
** Last update Sun Nov 11 11:27:12 2012 pelayo parejopagador
*/

#include <stdlib.h>
#include "h_list.h"

char	*my_strdup(char *src, char *ops)
{
  char	*dest;
  int	i;

  i = 0;
  dest = xmalloc(sizeof(char) * (datalenght(src, ops) + 1));
  if (src[0] == ops[3])
    {
      dest[0] = ops[3];
      i++;
    }
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
