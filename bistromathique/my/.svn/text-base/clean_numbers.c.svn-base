/*
** clean_numbers.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov  5 17:48:38 2012 louis-philippe baron
** Last update Mon Nov  5 18:51:45 2012 louis-philippe baron
*/

#include	"bistromathique.h"
#include	<stdlib.h>

void		my_swap(char *a, char *b)
{
  char		*ptr;

  ptr = a;
  a = b;
  b = ptr;
}

void		my_revstr(char *str)
{
  int	u;
  int	d;

  u = 0;
  d = my_strlen(str) - 1;
  while (u < d)
    {
      my_swap(&str[u], &str[d]);
      u++;
      d--;
    }
}

void		clean_start_0_nbrs(char *str)
{
  int		i;

  my_revstr(str);
  i = my_strlen(str);
  while (str[i] == '0')
    {
      str[i] = '\0';
      i--;
    }
  my_revstr(str);
}

void		fill_with_0(char *str, int max, char *base)
{
  int	i;

  i = 0;
  while (i < max)
    {
      str[i] = base[0];
      i++;
    }
}
