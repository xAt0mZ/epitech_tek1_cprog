/*
** basics.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec 19 10:31:15 2012 louis-philippe baron
** Last update Sat Jan  5 16:13:48 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

void		my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    write(2, &c, 1);
}

void		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

int		my_putnbr(int nb)
{
  if (nb == -2147483648)
    {
      my_putstr("-2147483648");
      return (0);
    }
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * -1;
    }
  if (nb > 9)
    my_putnbr(nb / 10);
  my_putchar((nb % 10) + '0');
  return (0);
}

int		my_getnbr(char *str)
{
  int		i;
  int		nb;
  int		a;

  i = 0;
  nb = 0;
  a = 1;
  if (str[i] == '-')
    {
      a = a * -1;
      i++;
    }
  while (str[i])
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (a * nb);
}
