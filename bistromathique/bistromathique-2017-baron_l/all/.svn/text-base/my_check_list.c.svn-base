/*
** my_check_list.c for my_double_link_list in /home/parejo_p//bistromatique
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Wed Oct 31 17:26:49 2012 pelayo parejopagador
** Last update Sat Nov 10 19:11:14 2012 pelayo parejopagador
*/

#include <unistd.h>
#include "h_list.h"

void		my_show_list(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}

void		my_show_before(t_list *list)
{
  t_list	*tmp;

  tmp = list;
  while (tmp->next != NULL)
    tmp = tmp->next;
  while (tmp != NULL)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->before;
    }
}

int		my_list_size(t_list *begin)
{
  t_list	*tmp;
  int		i;

  i = 0;
  tmp = begin;
  while (tmp != NULL)
    {
      i++;
      tmp = tmp->next;
    }
  return (i);
}

int	datalenght(char *data, char *ops)
{
  int	i;

  i = 0;
  while (((is_ops(data, i, ops) == 0 && is_ops(data, i + 1, ops) != 1)
	  || (is_ops(data, i, ops) == 1 && is_ops(data, i + 1, ops) != 0))
	 && data[i] != '\0')
    i++;
   if (data[0] == ops[3])
    i--;
   else
     i++;
  return (i);
}
