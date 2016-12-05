/*
** basics.c for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Dec  4 09:36:51 2012 louis-philippe baron
** Last update Tue Dec  4 11:40:35 2012 louis-philippe baron
*/

#include	"hbsq.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    my_putchar(str[i++]);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int		my_getnbr(char *str)
{
  int		nb;
  int		i;

  nb = 0;
  i = 0;
  while (str[i])
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (nb);
}
