/*
** main.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique/baron_l/ops/try_2
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Nov  9 19:43:06 2012 louis-philippe baron
** Last update Fri Nov  9 19:50:54 2012 louis-philippe baron
*/

int		main(int ac, char **av)
{
  int		i;
  char		base[10] = "0123456789";
  char		ops[7] = "()+-*/%";

  if (ac == 3)
    {
      i = addition(av[1], av[2], base, ops);
      if (i == 1)
	my_putstr("good");
    }
  my_putchar('\n');
  return (0);
}
