/*
** my_strlen.c for lib in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu/lib
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 19 17:02:52 2012 louis-philippe baron
** Last update Mon Nov 19 17:03:40 2012 louis-philippe baron
*/

#include	"my.h"

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
