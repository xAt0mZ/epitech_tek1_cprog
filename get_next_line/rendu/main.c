/*
** main.c for test in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 19 15:14:42 2012 louis-philippe baron
** Last update Mon Nov 26 14:47:14 2012 louis-philippe baron
*/

#include	"my.h"
#include	"get_next_line.h"

int		main()
{
  char		*str;

  while ((str = get_next_line(0)))
    {
      free(str);
    }
  my_putstr("End\n");
  return (0);
}
