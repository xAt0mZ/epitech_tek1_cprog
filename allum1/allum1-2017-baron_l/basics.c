/*
** basics.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu/standard
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Feb  6 15:27:39 2013 louis-philippe baron
** Last update Thu Feb  7 11:46:21 2013 louis-philippe baron
*/

#include	"hallum.h"

void		my_putchar(char c, int fd)
{
  write(fd, &c, 1);
}

void		my_putstr(char *str, int fd)
{
  int		i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i], fd);
      i++;
    }
}

void		my_putnbr(int nb)
{
  if (nb > 9)
    my_putnbr(nb / 10);
  my_putchar(nb % 10 + '0', 1);
}

int		my_getnbr(char *str)
{
  int		nb;
  int		i;

  i = 0;
  nb = 0;
  while (str[i])
    {
      nb = nb * 10 + str[i] - '0';
      i++;
    }
  return (nb);
}
