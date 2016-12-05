/*
** swap.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/try_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 20:24:15 2012 louis-philippe baron
** Last update Sat Nov 10 17:38:04 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	"header.h"

void		my_swap(char **nb1, char **nb2)
{
  char		*stock;

  stock = *nb1;
  *nb1 = *nb2;
  *nb2 = stock;
}

int		swap_same_size(char **nb1, char **nb2, char *base)
{
  int		i;
  int		p1;
  int		p2;

  i = 0;
  p1 = 0;
  p2 = 0;
  while (nb1[0][i] == nb2[0][i])
    i++;
  while (base[p1] != nb1[0][i])
    p1++;
  while (base[p2] != nb2[0][i])
    p2++;
  if (p1 < p2)
    {
      my_swap(nb1, nb2);
      return (1);
    }
  else
    return (0);
}

int		swap_nbr(char **nb1, char **nb2, char *base)
{
  int		s1;
  int		s2;
  int		i;

  s1 = my_strlen(*nb1);
  s2 = my_strlen(*nb2);
  if (s1 > s2)
    return (0);
  else if (s1 < s2)
    {
      my_swap(nb1, nb2);
      return (1);
    }
  else
    {
      i = swap_same_size(nb1, nb2, base);
      return (2 + i);
    }
}

int		are_the_nbrs_neg(char **nb1, char **nb2, char *ops)
{
  if (nb1[0][0] != ops[3] && nb2[0][0] != ops[3])
    return (0);
  else if (nb1[0][0] == ops[3] && nb2[0][0] != ops[3])
    {
      *nb1 = &nb1[0][1];
      return (1);
    }
  else if (nb1[0][0] != ops[3] && nb2[0][0] == ops[3])
    {
      *nb2 = &nb2[0][1];
      return (3);
    }
  else if (nb1[0][0] == ops[3] && nb2[0][0] == ops[3])
    {
      *nb1 = &nb1[0][1];
      *nb2 = &nb2[0][1];
      return (5);
    }
}

void		put_neg(char *res, int neg, int swap, char *ops)
{
  if (neg == 1 && (swap == 0 || swap == 2))
    res[0] = ops[3];
  else if (neg == 3 && (swap == 1 || swap == 3))
    res[0] = ops[3];
  else if (neg == 5)
    res[0] = ops[3];
}
