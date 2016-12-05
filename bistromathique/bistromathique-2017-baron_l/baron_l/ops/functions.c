/*
** functions.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/try_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 19:38:21 2012 louis-philippe baron
** Last update Sun Nov 11 17:09:43 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"header.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
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

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

int		get_val(char *base, char c)
{
  int		i;

  i = 0;
  while (base[i] != c)
    i++;
  return (i);
}

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
