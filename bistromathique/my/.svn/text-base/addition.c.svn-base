/*
** addition.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  2 12:08:45 2012 louis-philippe baron
** Last update Mon Nov  5 18:55:23 2012 louis-philippe baron
*/

#include	"bistromathique.h"
#include	<stdlib.h>

int		who_is_longer(char *nb1, char *nb2)
{
  int		size_1;
  int		size_2;

  size_1 = my_strlen(nb1);
  size_2 = my_strlen(nb2);
  if (size_1 > size_2)
    return (size_1 + 1);
  else if (size_1 < size_2)
    return (size_2 + 1);
  else
    return (size_1 + 1);
}

char		*calc_addition(char *nb1, char *nb2, char *base)
{
  int		size_max;
  char		*result;
  int		res;
  int		size_1;
  int		size_2;

  printf("my_strlen(base) = %d\n", my_strlen(base));
  size_1 = my_strlen(nb1) - 1;
  size_2 = my_strlen(nb2) - 1;
  size_max = who_is_longer(nb1, nb2);
  result = malloc((size_max + 1) * sizeof(char));
  if (result == NULL)
    return (NULL);
  result[size_max] = '\0';
  fill_with_0(result, size_max, base);
  size_max = size_max - 1;
  while (0 < size_max && 0 <= size_1 && 0 <= size_2)
    {
      res = (nb1[size_1]) + (nb2[size_2] - base[0]);
      result[size_max - 1] = ((result[size_max] - base[0] + res) / my_strlen(base)) + base[0];
      result[size_max] = ((result[size_max] - base[0] + res) % my_strlen(base)) + base[0];
      size_max--;
      size_1--;
      size_2--;
    }
  while (0 < size_max && 0 <= size_1)
    {
      res = nb1[size_1] - base[0];
      result[size_max - 1] = ((result[size_max] - base[0] + res) / my_strlen(base)) + base[0];
      result[size_max] = ((result[size_max] - base[0] + res) % my_strlen(base)) + base[0];
      size_max--;
      size_1--; 
    }
  return (result);
}
