/*
** eval_expr.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct 30 11:46:05 2012 louis-philippe baron
** Last update Fri Nov  2 12:38:04 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"bistromathique.h"

void		do_all_checks(char *base, char *ops, char *expr, long size)
{
  check_expr_base_ops(expr, base, ops, size);
  check_doubles(ops, base);
  check_doubles_2(base);
  check_doubles_2(ops);
  check_parenthesis(ops, expr, size);
  check_ops_bef_par(base, ops, expr, size);
  check_first_and_last(expr, ops, size);
  check_bef_af_ops(expr, base, ops);
}
/* Modifier type de retour de eval_expr (char *)*/

int		eval_expr(char *base, char *ops, char *expr, unsigned int size)
{
  do_all_checks(base, ops, expr, size);
  my_putstr("good job\n");
  return (0);
}
