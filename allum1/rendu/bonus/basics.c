/*
** basics.c for allum1 in /home/baron_l//local/rendu/projets/c_prog_elem/allum1/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Feb  5 18:14:59 2013 louis-philippe baron
** Last update Tue Feb  5 19:28:53 2013 louis-philippe baron
*/

#include	"hallum.h"

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

int		my_strcmp(char *str, char *find)
{
  int		i;

  i = 0;
  while (str[i] && find[i])
    {
      if (str[i] != find[i])
	return (ERROR);
      i++;
    }
  if (find[i] == '\0')
    return (0);
  else
    return (ERROR);
}
