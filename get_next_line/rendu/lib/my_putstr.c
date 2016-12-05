/*
** my_putstr.c for lib in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu/lib
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 19 13:08:50 2012 louis-philippe baron
** Last update Mon Nov 19 13:09:44 2012 louis-philippe baron
*/

#include	"my.h"

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
