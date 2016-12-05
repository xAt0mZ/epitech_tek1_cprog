/*
** main.c for test in /home/baron_l//local/rendu/piscine/projets/get_next_line/getnextline-2017-baron_l
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Dec  5 16:26:06 2012 louis-philippe baron
** Last update Wed Dec  5 16:27:01 2012 louis-philippe baron
*/

int		main(int ac, char **av)
{
  char		*s;

  while ((s = get_next_line(0)))
    {
      printf("%s\n", s);
      free(s);
    }
  return (0);
}
