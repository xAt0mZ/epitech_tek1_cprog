/*
** basics.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 22 16:01:22 2013 louis-philippe baron
** Last update Wed Mar 27 16:06:46 2013 louis-philippe baron
*/

#include	"hcorewar.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_putstr(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
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
  int		a;

  nb = 0;
  i = 0;
  a = 1;
  if (str[i] == '-')
    {
      a = -1;
      i++;
    }
  while (str[i])
    {
      nb = nb * 10 + (str[i] - '0');
      i++;
    }
  return (nb * a);
}

int		my_putnbr(int nb)
{
  if (nb > 9)
    my_putnbr(nb / 10);
  my_putchar(nb % 10 + '0');
  return (0);
}
