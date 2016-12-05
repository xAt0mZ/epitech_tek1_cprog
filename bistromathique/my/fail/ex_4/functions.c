/*
** functions.c for infin_add in /exam//rendu/ex_4
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov  8 09:29:09 2012 louis-philippe baron
** Last update Thu Nov  8 12:33:12 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	"infinadd.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

int		my_putstr(char *str)
{
  int		i;
  int		size;

  size = my_strlen(str);
  i = 0;
  while (str[i] == '0' || str[i] == '-')
    i++;
  if (i == size)
    {
      my_putchar('0');
      return (0);
    }
  else
    {
      i = 0;
      if (str[i] == '-')
	{
	  my_putchar(str[i]);
	  i++;
	}
      while (str[i] == '0' && str[i + 1] != '\0')
	i++;
      while (str[i] != '\0')
	{
	  my_putchar(str[i]);
	  i++;
	}
      return (0);
    }
}
void		my_swap(char **nb1, char **nb2)
{
  char		*stock;

  stock = *nb1;
  *nb1 = *nb2;
  *nb2 = stock;
}

void		*my_malloc(int size)
{
  void		*result;

  result = malloc(size);
  if (result == NULL)
    exit (1);
  return (result);
}
