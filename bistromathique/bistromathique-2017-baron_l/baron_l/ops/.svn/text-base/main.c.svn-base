/*
** main.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/try_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 19:43:06 2012 louis-philippe baron
** Last update Sun Nov 11 17:54:56 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	"header.h"

int		main(int ac, char **av)
{
  char		*str;
  char		ops[7] = "()+-*/%";

  str = addition(av[2], av[3], av[1], ops);
  my_putstr(str);
  my_putchar('\n');
  my_putstr("=================================\n");
  str = subtraction(av[2], av[3], av[1], ops);
  my_putstr(str);
  my_putchar('\n');
  my_putstr("=================================\n");
  str = multi(av[2], av[3], av[1], ops);
  my_putstr(str);
  my_putchar('\n');
  /*  my_putstr("=================================\n");
  str = division(av[2], av[3], av[1], ops);
  my_putstr(str);
  my_putchar('\n');
  */ return (0);
}
