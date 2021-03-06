/*
** epur_str.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/ex_4
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 17:55:41 2012 louis-philippe baron
** Last update Sat Nov 10 17:39:17 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	"header.h"

char		*epur_str(char *str, char *base, char *ops)
{
  int		i;
  int		k;
  int		max;
  char		*epured_str;

  i = 0;
  k = 0;
  max = my_strlen(str);
  while (str[i] == ops[3] || str[i] == base[0])
    i++;
  epured_str = my_malloc((max - i + 1) * sizeof(char));
  if (str[0] == ops[3])
    {
      epured_str[0] = ops[3];
      k++;
    }
  while (str[i] != '\0')
    {
      epured_str[k] = str[i];
      i++;
      k++;
    }
  epured_str[k] = '\0';
  free(str);
  return (epured_str);
}
