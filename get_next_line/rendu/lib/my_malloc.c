/*
** my_malloc.c for lib in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu/lib
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 19 15:10:57 2012 louis-philippe baron
** Last update Mon Nov 19 15:44:29 2012 louis-philippe baron
*/

#include	"my.h"

char		*my_malloc(int size)
{
  char		*str;

  str = malloc(size);
  if (str == NULL)
    {
      my_putstr("Could not alloc\n");
      exit(1);
    }
  return (str);
}
