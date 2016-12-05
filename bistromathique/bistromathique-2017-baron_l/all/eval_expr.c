/*
** eval_expr.c for bistromathique in /home/baron_l//local/rendu/piscine/projets/bistromathique
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Oct 30 11:46:05 2012 louis-philippe baron
** Last update Sun Nov 11 19:48:50 2012 louis-philippe baron
*/

#include	<stdlib.h>
#include	<unistd.h>
#include	"bistromathique.h"
#include	"h_list.h"

void		check_div_mod(char *expr, char *ops, long size)
{
  long		i;

  i = 0;
  while (i < size)
    {
      if (expr[i] == ops[5])
	{
	  my_putstr("Division not supported yet\n");
	  exit(1);
	}
      if (expr[i] == ops[6])
	{
	  my_putstr("Modulo not supported yet\n");
	  exit(1);
	}
      i++;
    }
}

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

int	launch_list(char *base, char *ops, char *expr, long size)
{
  t_list **begin;
  t_list *fpointer;

  fpointer = my_params_in_list(expr, ops);
  begin = &fpointer;
  my_double_link_list(begin);
  my_show_list(*begin);
  priority_manager(begin, ops, base, 0);
  my_show_list(*begin);
  return (0);
}

int		eval_expr(char *base, char *ops, char *expr, long size)
{
  check_div_mod(expr, ops, size);
  do_all_checks(base, ops, expr, size);
  my_putstr("good job\n");
  launch_list(base, ops, expr, size);
  my_putstr("Yeah man\n");
  return (0);
}
