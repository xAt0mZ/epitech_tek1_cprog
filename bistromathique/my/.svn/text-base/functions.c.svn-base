/*
** functions.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 31 16:32:50 2012 louis-philippe baron
** Last update Mon Nov  5 17:49:54 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"bistromathique.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
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
