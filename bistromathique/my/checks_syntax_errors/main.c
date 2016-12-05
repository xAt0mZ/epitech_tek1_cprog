/*
** main.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 31 11:17:56 2012 louis-philippe baron
** Last update Sat Nov 10 17:42:57 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"bistromathique.h"

static void	check_base(char *);
static void	check_ops(char *);
static char	*get_expr(int);

int		main(int ac, char **av)
{
  char		*expr;
  int		size;

  if (ac != 4)
    {
      my_putstr("Usage : ");
      my_putstr(av[0]);
      my_putstr(" base ops\"()+-*/%\" exp_len\n");
      exit(1);
    }
  check_base(av[1]);
  check_ops(av[2]);
  size = my_getnbr(av[3]);
  expr = get_expr(size);
  eval_expr(av[1], av[2], expr, size);
  return (0);
}

static void	check_base(char *b)
{
  if (my_strlen(b) < 2)
    {
      my_putstr("Bad base\n");
      exit(1);
    }
}

static char	*get_expr(int size)
{
  char		*expr;

  expr = malloc(size + 1);
  if (expr == 0)
    {
      my_putstr("Could not alloc\n");
      exit(3);
    }
  if (read(0, expr, size) != size)
    {
      my_putstr("Could not read\n");
      exit(4);
    }
  expr[size] = 0;
  return (expr);
}

static void	check_ops(char *ops)
{
  if (my_strlen(ops) != 7)
    {
      my_putstr("Bad ops\n");
      exit(5);
    }
}
