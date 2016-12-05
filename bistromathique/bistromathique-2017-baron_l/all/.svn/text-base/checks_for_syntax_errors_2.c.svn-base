/*
** checks_for_syntax_errors_2.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Oct 31 15:55:11 2012 louis-philippe baron
** Last update Sun Nov 11 19:35:50 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"bistromathique.h"

int		check_doubles(char *ops, char *base)
{
  int		i;
  int		j;

  i = 0;
  while (ops[i] != '\0')
    {
      j = 0;
      while (base[j] != '\0')
	{
	  if (base[j] == ops[i])
	    {
	      my_putstr("Base and operands should not contain same chars\n");
	      exit(1);
	    }
	  j++;
	}
      i++;
    }
  return (0);
}

int		check_doubles_2(char *str)
{
  int		i;
  int		j;
  int		max;

  max = my_strlen(str);
  j = 0;
  while (j < max)
    {
      i = j + 1;
      while (str[i] != '\0')
	{
	  if (str[i] == str[j])
	    {
	      my_putstr("Base or operands should not contain same chars twice\n");
	      exit(1);
	    }
	  i++;
	}
      j++;
    }
  return (0);
}

int		check_f_l_is_par(char *ops, char *expr, int i)
{
  if (i == 0 && check_match(expr[i + 1], ops, 4) == 0)
    {
      my_putstr("Syntax error after the first parenthesis of the expression\n");
      exit(0);
    }
  else if (i != 0 && check_match(expr[i - 1], ops, 2) == 0)
    {
      my_putstr("Syntax error before the last parenthesis of the expression\n");
      exit(0);
    }
  return (0);
}

int		check_bef_af_ops(char *expr, char *base, char *ops)
{
  long		i;

  i = 0;
  while (expr[i] != '\0')
    {
      if ((expr[i] == ops[4] || expr[i] == ops[5] || expr[i] == ops[6]) &&
	  (check_match(expr[i - 1], base, 0) == 1 && expr[i - 1] != ops[1]))
	{
	  my_putstr("Syntax error before an operand\n");
	  exit(0);
	}
      i++;
    }
  return (0);
}
