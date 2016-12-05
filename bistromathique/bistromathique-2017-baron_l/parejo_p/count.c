/*
** count.c for bistromatique in /home/parejo_p//eval_expr
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Sun Oct 28 16:55:14 2012 pelayo parejopagador
** Last update Sat Nov 10 18:48:02 2012 pelayo parejopagador
*/

#include "h_list.h"

int	partial_ops(char *str, int i, char *ops)
{
  if (str[i] == ops[2]|| str[i] == ops[3] 
      || str[i] == ops[4] || str[i] == ops[5]
      || str[i] == ops[6])
    return (0);
  else
    return (1);
}

int	is_ops(char *str, int i, char *ops)
{
  if (str[i] == ops[0] || str[i] == ops[1] || str[i] == ops[2]
      || str[i] == ops[3] || str[i] == ops[4] 
      || str[i] == ops[5] || str[i] == ops[6])
    return (0);
  else
    return (1);
}

int	is_sarting(char *str, int i, char *ops)
{
  if (str[i] == ops[4] || str[i] == ops[5] || str[i] == ops[6])
    return (0);
  else
    return (1);
}

int	is_ops_in_list(char *str, char *ops)
{
  if (str[0] == ops[0] || str[0] == ops[1] || str[0] == ops[2]
      || str[0] == ops[3] || str[0] == ops[4] 
      || str[0] == ops[5] || str[0] == ops[6])
    return (0);
  else
    return (1);
}

int	wordlenght(char *str, int i, char *ops)
{
  while (((is_ops(str, i, ops) == 0 && is_ops(str, i + 1, ops) != 1)
	 || (is_ops(str, i, ops) == 1 && is_ops(str, i + 1, ops) != 0))
	 && str[i] != '\0')
    i = i + 1;
  return (i);
}
