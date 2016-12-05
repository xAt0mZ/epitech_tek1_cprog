/*
** subtraction.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Nov  6 18:34:43 2012 louis-philippe baron
** Last update Wed Nov  7 16:56:39 2012 louis-philippe baron
*/

/*
  my_putstr("Subtraction no supported yet\n");
  exit(6);
*/

#include	<stdlib.h>
#include	"bistromathique.h"

int		who_is_longer_sub(char **nb1, char **nb2)
{
  int		s_1;
  int		s_2;

  s_1 = my_strlen(*nb1);
  s_2 = my_strlen(*nb2);
  if (s_1 > s_2)
    return (s_1 + 1);
  else if (s_1 < s_2)
    return (s_2 + 1);
  else
    return (s_1 + 1);
}

int		negativ_nbrs_sub(char **nb1, char **nb2, char *ops)
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

void		do_subtraction(char *nb1, char *nb2, char *base, char *res)
{
  int		s_1;
  int		s_2;
  int		s_m;
  int		stk;

  s_m = who_is_longer_sub(&nb1, &nb2);
  s_1 = my_strlen(nb1) - 1;
  s_2 = my_strlen(nb2) - 1;
  res[s_m] = '\0';
  while (0 < s_m && 0 <= s_1)
    {
      s_m--;
      if (0 <= s_2)
	{
	  if (get_val(base, nb1[s_1]) >= get_val(base, nb2[s_2]))
	    stk = get_val(base, nb1[s_1]) - get_val(base, nb2[s_2]);
	  else
	    {
	      stk = (get_val(base, nb1[s_1]) + 10) - get_val(base, nb2[s_2]);
	      nb2[s_2] = base[get_val(base, nb2[s_2]) + 1];
	    }
	  res[s_m] = base[stk];
	}
      s_1--;
      if (0 <= s_2)
	s_2--;
    }
}

char		*calc_subtraction(char *nb1, char *nb2, char *base, char *ops)
{
  char		*res;
  int		sign;
  int		s_m;

  sign = negativ_nbrs_sub(&nb1, &nb2, ops);
  if (sign < 0)
    {
      my_putstr("going from sub to add\n");
      return (calc_addition(nb1, nb2, base, ops));
    }
  s_m = who_is_longer_sub(&nb1, &nb2);
  res = my_malloc((s_m + 1) * sizeof(char));
  fill_res_with_0(res, s_m, base);
  do_subtraction(nb1, nb2, base, res);
  return (res);
}
