/*
** my_putstr.c for my_putstr in /home/parejo_p//library
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Wed Oct 17 15:49:31 2012 pelayo parejopagador
** Last update Thu Nov  1 12:53:56 2012 pelayo parejopagador
*/

#include <unistd.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
