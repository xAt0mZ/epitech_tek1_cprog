/*
** priority.c for bistromathique in /home/parejo_p/bistromathique
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Fri Nov  9 19:32:21 2012 pelayo parejopagador
** Last update Sun Nov 11 19:02:21 2012 pelayo parejopagador
*/

#include <stdlib.h>
#include "h_list.h"
#include "header.h"

int		mult_div_mod(t_list *list, char *ops, char *base)
{
  char		*tmp;

  if (list->data[0] == ops[4])
    tmp = multi(list->before->data, list->next->data, ops, base);
  free(list->data);
  list->data = tmp;
  save_and_replace(list->before, ops);
  return (0);
}

int		add_minus(t_list *list, char *ops, char *base)
{
  char		*tmp;

  if (list->data[0] == ops[2])
   tmp = addition(list->before->data, list->next->data, base, ops);
  else if (list->data[0] == ops[3])
    tmp = subtraction(list->before->data, list->next->data, base, ops);
  free(list->data);
  list->data = tmp;
  save_and_replace(list->before, ops);
  return (0);
}

void		save_and_replace(t_list *current, char *ops)
{
  t_list	*s_next;
  t_list	*s_before;
  char		*cpy;

  current = current->next;
  if (current->before->data[0] == ops[3] && current->before->data[1] == ops[0])
    {
      cpy = my_strdup(current->data, ops);
      free(current->data);
      current->data = cpy;
    }
  s_next = current->next;
  s_before = current->before;
  current->before->before->next = current;
  current->next->next->before = current;
  current->before = current->before->before;
  current->next = current->next->next;
  free(s_before->data);
  free(s_before);
  free(s_next->data);
  free(s_next);
}

int		arithmetics(t_list **open_brackets, int i, char *ops, char *base)
{
  t_list	*list;

  list = *open_brackets;
  while (list != NULL || list->data[0] != ops[1])
    {
      if (list->next->data[0] == ops[0] || list->next->data[1] == ops[0])
	return (1);
      else if (i == 0 && is_starting(list->data, 0, ops) == 0)
	mult_div_mod(list, ops, base);
      else if (i == 1 && is_starting(list->data, 0, ops) == 1)
	add_minus(list, ops, base);
      list = list->next;
    }
  if (i == 0)
    {
      arithmetics(open_brackets, 1, ops, base);
      save_and_replace(*open_brackets, ops);
    }
  return (0);
}
			    
char		*priority_manager(t_list **begin, char *ops, char *base, int k)
{
  t_list	*list;

  list = *begin;
  if (k == 1)
    list = list->next;
  while (list != NULL)
    {
      if (list->data[0] == ops[0] || list->data[1] == ops[0])
	priority_manager(&list, ops, base, 1);
      else if (partial_ops(list->data, 0, ops) == 0 && list->data[1] == '\0')
	{
	  arithmetics(begin, 0, ops, base);
	  if (k == 1)
	    return (0);
	}
      list = list->next;
    }
  return (list->data);
}
