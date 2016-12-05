/*
** main2.c for bistrotest in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  2 12:46:41 2012 louis-philippe baron
** Last update Thu Nov  8 17:13:00 2012 louis-philippe baron
*/

int		main(int ac, char **av)
{
  char		ops[7] = "()+-*/%";

  my_putstr(calc_subtraction(av[1], av[2], av[3], ops));
  my_putchar('\n');
}
