/*
** priority.c for bistromathique in /home/parejo_p/bistromathique
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Fri Nov  9 19:32:21 2012 pelayo parejopagador
** Last update Sun Nov 11 11:25:27 2012 pelayo parejopagador
*/

#include <stdlib.h>
#include "h_list.h"

int	mult_div_mod(t_list *list, char *ops, char *base)
{
  if (list->data[0] == ops[4])
    multi(list->before->data, list->next->data, ops, base);
  else if (list->data[0] == ops[5])
    division(list->before->data, list->next->data, ops, base);
  else if (list->data[0] == ops[6])
    modulo(list->before->data, list->next->data, ops, base);
}

int	add_minus(char *nb1, char *nb2, char *operand, char *ops, char *base)
{
  if (operand[0] == ops[2])
    addition(nb1, nb2, base, ops);
  else if (operand[0] == ops[3])
    subtraction(nb1, nb2, base, ops);
}

void		save_and_replace(t_list *current)
{
  t_list	*s_next;
  t_list	*s_before;
  char		*cpy;

  i = 0;
  current = current->next;
  if (current->before->data[0] == ops[3] && current->before->data[1] == ops[0])
    {
      cpy = my_strdup(current->data, ops);
      free(current->data);
      current->data = cpy;
    }
  current->next = s_next;
  current->before = s_before;
  current->before->before->next = current;
  current->next->next->before = current;
  current->before = current->before->before;
  current->next = current->next->next;
  free(s_before->data);
  free(s_before);
  free(s_next->data);
  free(s_next);
}

int		arithmetics(t_list **open_brackets, int i, char *ops, char *base) /* i = 0 */
{
  t_list	*list;

  list = *open_brackets;
  while (list != NULL || list->data[0] != ops[1])
    {
      if (list->next->data[0] == ops[0] || list->next->data[1] == ops[0])
	return (1);
      else if (i = 0 && is_starting(list->data, 0, ops) == 0)
	mult_div_mod(list->before->data, list->next->data, list->data, ops, base);
      else if (i = 1 && is_starting(list->data, 0, ops) == 1)
	add_minus(list->before->data, list->next->data, list->data, ops, base);
      list->next;
    }
  if (i == 0)
    {
      arithmetics(*open_brackets, 1);
      save_and_replace(open_brackets);
    }
  return (0);
}
			    
int		priority_manager(t_list **begin, char *ops, char *base, int k)
{
  t_list	*list;

  list = *begin;
  if (k == 1)
    list = list->next;
  while (list != NULL)
    {
      if (list->data[0] == ops[0] || list->data[1] == ops[0])
	priority_manager(list, ops, base, 1);
      else if (partial_ops(list->data, 0, ops) == 0 && list->data[1] == '\0')
	{
	  arithmetics(begin, 0, ops, base);
	  if (k == 1)
	    return (0);
	}
      list = list->next;
    }
}
