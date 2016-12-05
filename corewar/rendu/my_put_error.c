/*
** my_put_error.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Mar 28 15:41:12 2013 louis-philippe baron
** Last update Thu Mar 28 15:42:39 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		my_put_error(char *str, int nb)
{
  my_putstr(str);
  my_putnbr(nb);
  my_putchar('\n');
  return (0);
}
