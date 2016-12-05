/*
** my_putchar.c for lib in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu/lib
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Nov 19 13:09:49 2012 louis-philippe baron
** Last update Mon Nov 19 15:44:28 2012 louis-philippe baron
*/

#include	"my.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}
