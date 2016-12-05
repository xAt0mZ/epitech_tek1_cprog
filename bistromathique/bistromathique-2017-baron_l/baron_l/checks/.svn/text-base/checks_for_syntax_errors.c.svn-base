/*
** checks_for_syntax_errors.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct 30 12:50:22 2012 louis-philippe baron
** Last update Mon Nov  5 13:59:06 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"bistromathique.h"

int		check_match(char to_match, char *str_to_match_in, int i)
{
  while (str_to_match_in[i] != '\0')
    {
      if (str_to_match_in[i] == to_match)
	return (0);
      else
	i++;
    }
  return (1);
}

int		check_expr_base_ops(char *expr, char *base, char *ops, int size)
{
  unsigned int	i;

  i = 0;
  while (i < size)
    {
      if (check_match(expr[i], base, 0) == 1 && check_match(expr[i], ops, 0) == 1)
	{
	  my_putstr("Expression contains chars not contained in base or operands\n");
	  exit(0);
	}
      i++;
    }
  return (0);
}

int		check_parenthesis(char *ops, char *expr, int size)
{
  unsigned int	i;
  int		parenthesis;

  i = 0;
  parenthesis = 0;
  while (i < size)
    {
      if (expr[i] == ops[0])
	parenthesis++;
      else if (expr[i] == ops[1])
	parenthesis--;
      if (parenthesis < 0)
	{
	  my_putstr("Some '(' are missing\n");
	  exit(0);
	}
      i++;
    }
  if (parenthesis != 0)
    {
      my_putstr("Some ')' are missing\n");
      exit(0);
    }
  return (0);
}

int		check_ops_bef_par(char *base, char *ops, char *expr, int size)
{
  unsigned int	i;

  i = 0;
  while (i < size)
    {
      if ((i == 0 && expr[i] == ops[0]) || (i == size - 1 && expr[i] == ops[1]))
	check_f_l_is_par(ops, expr, i);
      else if (i != 0 && expr[i] == ops[0] &&
	       ((expr[i - 1] != ops[0] && check_match(expr[i - 1], ops, 2) == 1) ||
		(expr[i + 1] != ops[0] && expr[i + 1] != ops[2] &&
		 expr[i + 1] != ops[3] && check_match(expr[i + 1], base, 0) == 1)))
	{
	  my_putstr("Syntax error before or after a '('\n");
	  exit(0);
	}
      else if (i != (size - 1) && expr[i] == ops[1] &&
	       (check_match(expr[i + 1], ops, 1) == 1 ||
		(expr[i - 1] != ops[1] && check_match(expr[i - 1], base, 0) == 1)))
	{
	  my_putstr("Syntax error before or after a ')'\n");
	  exit(0);
	}
      i++;
    }
  return (0);
}

int		check_first_and_last(char *expr, char *ops, int size)
{
  if (expr[0] == ops[1] || expr[0] == ops[4] ||
      expr[0] == ops[5] || expr[0] == ops[6])
    {
      my_putstr("Syntax error on the first char of the expression\n");
      exit(0);
    }
  else if (expr[size - 1] == ops[0] || expr[size - 1] == ops[2] ||
	   expr[size - 1] == ops[3] || expr[size - 1] == ops[4] ||
	   expr[size - 1] == ops[5] || expr[size - 1] == ops[6])
    {
      my_putstr("Syntax error on the last char of the expression\n");
      exit(0);
    }
  return (0);
}
