/*
** functions.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/try_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 19:38:21 2012 louis-philippe baron
** Last update Sun Nov 11 18:47:08 2012 pelayo parejopagador
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"header.h"

void		*my_malloc(int size, char *base)
{
  void		*res;

  res = malloc(size);
  if (res == NULL)
    {
      my_putstr("Could not alloc\n");
      exit(1);
    }
  fill_with_0(res, base, size - 1);
  return (res);
}

int		my_getnbr(char *str)
{
  int		i;
  int		a;
  int		sign;

  i = 0;
  a = 0;
  sign = 1;
  while (str[i] == '-' || str[i] == '+')
    {
      if (str[i] == '-')
	sign = sign * (-1);
      i++;
    }
  while (str[i] >= '0' && str[i] <= '9')
    {
      a = a * 10 + (str[i] - 48);
      i++;
    }
  if (sign < 0 || a == 0)
    {
      my_putstr("Bad expr len : should be a number greater than 0\n");
      exit(2);
    }
  else
    return (a);
}

int		get_val(char *base, char c)
{
  int		i;

  i = 0;
  while (base[i] != c)
    i++;
  return (i);
}
