/*
** addition.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  2 12:08:45 2012 louis-philippe baron
** Last update Wed Nov  7 18:07:22 2012 louis-philippe baron
*/

#include	"bistromathique.h"
#include	<stdlib.h>

int		who_is_longer_add(char **nb1, char **nb2)
{
  int		s_1;
  int		s_2;

  s_1 = my_strlen(*nb1);
  s_2 = my_strlen(*nb2);
  if (s_1 > s_2)
    return (s_1 + 1);
  else if (s_1 < s_2)
    {
      my_swap(nb1, nb2);
      return (s_2 + 1);
    }
  else
    return (s_1 + 1);
}

int		negativ_nbrs_add(char **nb1, char **nb2, char *ops)
{
  int		sign;

  sign = 1;
  if (*nb1[0] == ops[3])
    {
      sign = sign * (-1);
      *nb1 = &nb1[0][1];
    }
  if (*nb2[0] == ops[3])
    {
      sign = sign * (-1);
      *nb2 = &nb2[0][1];
    }
  return (sign);
}

int		is_res_neg_or_not(char *);

void		do_addition(char *nb1, char *nb2, char *base, char *res)
{
  int		s_1;
  int		s_2;
  int		s_m;
  int		stk;

  s_m = who_is_longer_add(&nb1, &nb2);
  s_1 = my_strlen(nb1) - 1;
  s_2 = my_strlen(nb2) - 1;
  res[s_m] = '\0';
  while (0 < s_m && 0 <= s_1)
    {
      s_m--;
      if (0 <= s_2)
	stk = get_val(base, nb1[s_1]) + get_val(base, nb2[s_2]);
      else
	stk = get_val(base, nb1[s_1]);
      res[s_m - 1] = base[(get_val(base, res[s_m]) + stk) / my_strlen(base)];
      res[s_m] = base[(get_val(base, res[s_m]) + stk) % my_strlen(base)];
      s_1--;
      if (0 <= s_2)
	s_2--;
    }
}

char		*calc_addition(char *nb1, char *nb2, char *base, char *ops)
{
  char		*res;
  int		sign;
  int		s_m;
  int		res_sign;

  sign = negativ_nbrs_add(&nb1, &nb2, ops);
  if (sign < 0)
    {
      my_putstr("going from add to sub\n");
      return (calc_subtraction(nb2, nb1, base, ops));
    }
  s_m = who_is_longer_add(&nb1, &nb2);
  res = my_malloc((s_m + 1) * sizeof(char));
  fill_res_with_0(res, s_m, base);
  do_addition(nb1, nb2, base, res);
  return (res);
}
