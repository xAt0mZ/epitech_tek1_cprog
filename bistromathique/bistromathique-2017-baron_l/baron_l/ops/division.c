/*
** division.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Nov 11 16:54:55 2012 louis-philippe baron
** Last update Sun Nov 11 17:08:33 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	"header.h"

void		do_division(char *nb1, char *nb2, char *base, char *res)
{
  int		s1;
  int		s2;
  int		s_m;
  int		stk;
  int		ret;
  int		i;

  i = 1;
  ret = 0;
  s1 = my_strlen(nb1) - 1;
  s2 = my_strlen(nb2) - i;
  s_m = my_strlen(res) - i;
}

char		*division(char *nb1, char *nb2, char *base, char *ops)
{
  char		*res;
  int		s1;
  int		s2;
  int		neg;
  int		swap;

  neg = are_the_nbrs_neg(&nb1, &nb2, ops);
  s1 = my_strlen(nb1);
  s2 = my_strlen(nb2);
  swap = swap_nbr(&nb1, &nb2, base);
  if (swap == 0)
    {
      res = my_malloc((s1 + s2 + 2 + (neg % 2)) * sizeof(char));
      do_division(nb1, nb2, base, res);
      if (neg == 1 || neg == 3)
	res[0] = ops[3];
      res = epur_str(res, base, ops);
      if (res[0] == ops[3] && res[1] == '\0')
	res[0] = base[0];
    }
  else
    res = my_malloc(2 * sizeof(char));
  return (res);
}
