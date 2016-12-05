/*
** main.c for infin_add in /exam//rendu/ex_4
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov  8 09:28:06 2012 louis-philippe baron
** Last update Fri Nov  9 13:36:01 2012 louis-philippe baron
*/

#include	"infinadd.h"

int		main(int ac, char **av)
{
  char		ops[7] = "()+-*/%";
  char		*str;

  if (ac == 4)
    str = calc_addition(av[1], av[2], av[3], ops);
  my_putstr(str);
  my_putchar('\n');
  printf("printf main = %s\n", str);
  return (0);
}
