/*
** addition.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/try_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 19:45:28 2012 louis-philippe baron
** Last update Sat Nov 10 17:37:55 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	"header.h"

int		who_is_longer(char *nb1, char *nb2)
{
  int		s1;
  int		s2;

  s1 = my_strlen(nb1);
  s2 = my_strlen(nb2);
  if (s1 >= s2)
    return (s1);
  else
    return (s2);
}

void		do_subtraction(char *nb1, char *nb2, char *base, char *res)
{
  int		s1;
  int		s2;
  int		stk;
  int		s_m;
  int		ret;

  s1 = my_strlen(nb1) - 1;
  s2 = my_strlen(nb2) - 1;
  s_m = my_strlen(res) - 1;
  ret = 0;
  while (s1 >= 0)
    {
      stk = get_val(base, nb1[s1]) - ret;
      if (s2 >= 0)
	stk = stk - get_val(base, nb2[s2]);
      if (stk < 0)
	stk = stk + 2 * my_strlen(base);
      ret = stk / my_strlen(base);
      res[s_m] = base[stk % my_strlen(base)];
      if (s2 >= 0)
	s2--;
      s1--;
      s_m--;
    }
}
void		do_addition(char *nb1, char *nb2, char *base, char *res)
{
  int		s1;
  int		s2;
  int		s_m;
  int		stk;
  int		ret;

  s1 = my_strlen(nb1) - 1;
  s2 = my_strlen(nb2) - 1;
  s_m = my_strlen(res) - 1;
  ret = 0;
  while (s1 >= 0)
    {
      stk = get_val(base, nb1[s1]) + ret;
      if (s2 >= 0)
	stk = stk + get_val(base, nb2[s2]);
      res[s_m] = base[stk % my_strlen(base)];
      ret = stk / my_strlen(base);
      if (s1 == 0 && ret != base[0])
	res[s_m - 1] = base[ret];
      s1--;
      s_m--;
      if (s2 >= 0)
	s2--;
    }
}

int		addition(char *nb1, char *nb2, char *base, char *ops)
{
  char		*res;
  int		s_m;
  int		neg;
  int		swap;

  neg = are_the_nbrs_neg(&nb1, &nb2, ops);
  s_m = who_is_longer(nb1, nb2);
  swap = swap_nbr(&nb1, &nb2, base);
  res = my_malloc((s_m + 2 + (neg % 2)) * sizeof(char));
  fill_with_0(res, base, s_m + 1 + (neg % 2));
  if (neg == 1 || neg == 3)
    do_subtraction(nb1, nb2, base, res);
  else
    do_addition(nb1, nb2, base, res);
  put_neg(res, neg, swap, ops);
  res = epur_str(res, base, ops);
  free(res);
  return (1);
}
