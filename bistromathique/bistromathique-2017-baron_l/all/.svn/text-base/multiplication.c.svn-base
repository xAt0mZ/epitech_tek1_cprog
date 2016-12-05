/*
** multiplication.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Nov 11 09:18:22 2012 louis-philippe baron
** Last update Sun Nov 11 17:12:26 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	"header.h"

void		do_multi(char *nb1, char *nb2, char *base, char *res)
{
  int		s1;
  int		s2;
  int		s_m;
  int		stk;
  int		ret;
  int		i;

  i = 1;
  while (i <= my_strlen(nb2))
    {
      ret = 0;
      s1 = my_strlen(nb1) - 1;
      s2 = my_strlen(nb2) - i;
      s_m = my_strlen(res) - i;
      while (s1 >= 0)
	{
	  stk = get_val(base, nb1[s1]) * get_val(base, nb2[s2]) + ret;
	  ret = (get_val(base, res[s_m]) + stk) / my_strlen(base);
	  res[s_m] = base[(get_val(base, res[s_m]) + stk) % my_strlen(base)]; 
	  s1--;
	  s_m--;
	}
      res[s_m] = base[ret];
      i++;
    }
}

char		*multi(char *nb1, char *nb2, char *base, char *ops)
{
  char		*res;
  int		s1;
  int		s2;
  int		neg;

  neg = are_the_nbrs_neg(&nb1, &nb2, ops);
  s1 = my_strlen(nb1);
  s2 = my_strlen(nb2);
  swap_nbr(&nb1, &nb2, base);
  res = my_malloc((s1 + s2 + 2 + (neg % 2)) * sizeof(char), base);
  fill_with_0(res, base, s1 + s2 + 1 + (neg % 2));
  do_multi(nb1, nb2, base, res);
  if (neg == 1 || neg == 3)
    res[0] = ops[3];
  res = epur_str(res, base, ops);
  if (res[0] == ops[3] && res[1] == '\0')
    res[0] = base[0];
  return (res);
}
