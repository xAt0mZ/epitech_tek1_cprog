/*
** clean_numbers_addition.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov  5 17:48:38 2012 louis-philippe baron
** Last update Wed Nov  7 15:01:51 2012 louis-philippe baron
*/

#include	"bistromathique.h"
#include	<stdlib.h>

void		my_swap(char **a, char **b)
{
  char		*ptr;

  ptr = *a;
  *a = *b;
  *b = ptr;
}

void		fill_res_with_0(char *str, int max, char *base)
{
  int	i;

  i = 0;
  while (i < max)
    {
      str[i] = base[0];
      i++;
    }
}

int		get_val(char *base, char nb)
{
  int		i;

  i = 0;
  while (base[i] != nb)
    i++;
  return (i);
}
