/*
** addition.c for infin_add in /exam//rendu/ex_4
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov  8 09:28:00 2012 louis-philippe baron
** Last update Fri Nov  9 19:23:00 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	"infinadd.h"

int		who_is_longer(char *nb1, char *nb2)
{
  int		s_1;
  int		s_2;

  s_1 = my_strlen(nb1);
  s_2 = my_strlen(nb2);
  if (s_2 <= s_1)
    return (s_1 + 1);
  if (s_1 < s_2)
    return (s_2 + 1);
}

int		negative_gestion(char **nb1, char **nb2, char *ops)
{
  int		i;

  i = 1;
  if (*nb1[0] == ops[3] && *nb2[0] != ops[3])
    {
      i = 2;
      *nb1 = &nb1[0][1];
    }
  else if (*nb1[0] != ops[3] && *nb2[0] == ops[3])
    {
      i = 3;
      *nb2 = &nb2[0][1];
    }
  else if (*nb1[0] == ops[3] && *nb2[0] == ops[3])
    {
      i = 4;
      *nb1 = &nb1[0][1];
      *nb2 = &nb2[0][1];
    }
  return (i);
}

void		do_addition(char *nb1, char *nb2, char *res, char *base)
{
  int		s_1;
  int		s_2;
  int		s_m;
  int		stk;

  s_m = who_is_longer(nb1, nb2) + 1;
  s_1 = my_strlen(nb1) - 1;
  s_2 = my_strlen(nb2) - 1;
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

void		minus_or_not(char *res, char *ops, int swap, int sign)
{
  if (sign == 4)
      res[0] = ops[3];
  else if (sign == 2 && swap == 1)
    res[0] = ops[3];
  else if (sign == 3 && swap == 2)
    res[0] = ops[3];
}

char		*calc_addition(char *nb1, char *nb2, char *base, char *ops)
{
  int		s_m;
  char		*res;
  int		sign;
  int		swap;

  s_m = who_is_longer(nb1, nb2);
  sign = negative_gestion(&nb1, &nb2, ops);
  res = my_malloc((s_m + 2) * sizeof(char));
  fill_with_0(res, s_m);
  printf("res juste apres creation et remplissage = %s\n", res);
  if (my_strlen(nb1) != my_strlen(nb2))
    swap = swap_or_not(&nb1, &nb2);
  else if (my_strlen(nb1) == my_strlen(nb2))
    swap = swap_same_size(&nb1, &nb2, base);
  if (sign == 1)
    do_addition(nb1, nb2, res, base);
  else if (sign == 2)
    do_subtraction(nb1, nb2, res, base);
  else if (sign == 3)
    do_subtraction(nb1, nb2, res, base);
  else if (sign == 4)
    do_addition(nb1, nb2, res, base);
  minus_or_not(res, ops, swap, sign);
  //  res = epur_str(res, base, ops);
  printf("printf calc_addition = %s\n", res);
  return (res);
}
