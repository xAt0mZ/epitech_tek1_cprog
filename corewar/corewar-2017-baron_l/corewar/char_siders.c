/*
** char_siders.c for siders in /home/garner_p/Save/lib/functions
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Fri Dec 14 15:37:45 2012 Garnero Philip
** Last update Tue Mar 26 14:54:22 2013 Garnero Philip
*/

#include	<unistd.h>
#include	"core.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}

void	my_putstr2(char *str)
{
  write(2, str, my_strlen(str));
}

int     my_strlen(char *str)
{
  int   n;

  n = 0;
  while (str[n])
    n = n + 1;
  return (n);
}

unsigned char   *my_strcpy(unsigned char *dest, unsigned char *src)
{
  int		length;

  length = 0;
  while (src[length])
    {
      dest[length] = src[length];
      length = length + 1;
    }
  dest[length] = 0;
  return (dest);
}
