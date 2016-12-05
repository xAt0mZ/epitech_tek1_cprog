/*
** my_double_link_list.c for bistromathique in /home/parejo_p//library/Jour_11
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Tue Oct 23 17:11:38 2012 pelayo parejopagador
** Last update Fri Nov  9 19:33:53 2012 pelayo parejopagador
*/

#include <stdlib.h>
#include "h_list.h"

t_list		*my_params_in_list(char *str, char *ops)
{
  t_list	*list;
  t_list	*elem;
  unsigned int	i;

  list = NULL;
  i = 0;
  while (str[i] != '\0')
    {
      elem = xmalloc(sizeof(t_list));
      if ((str[i] == ops[3] || str[i] == ops[2]) && i == 0)
	i = multi_ops(str, elem, i, ops);
      else if (is_ops(str, (i - 1), ops) == 0 && str[i - 1] != ops[1]
	       && partial_ops(str, i, ops) == 0 && i != '\0')
	i = multi_ops(str, elem, i, ops);
      else if (is_ops(str, i, ops) == 0)
	i = copy_one_ops(str, elem, i);
      else if (is_ops(str, i, ops) == 1)
	i = my_copy_base(str, elem, i, ops);
      elem->next = list;
      list = elem;
    }
  return (list);
}

void		my_double_link_list(t_list **begin)
{
  int		i;
  int		size;
  t_list	*link;
  t_list	*current;
  t_list	*tmp;

  size = my_list_size(*begin);
  i = -1;
  tmp = *begin;
  while (++i <= (size - 1))
    {
      link = tmp->next;
      if (i == 0)
	tmp->next = NULL;
      else
	tmp->next = current;
      current = tmp;
      tmp->before = link;
      tmp = link;
      if (i == (size - 1))
	*begin = current;
    }
}
