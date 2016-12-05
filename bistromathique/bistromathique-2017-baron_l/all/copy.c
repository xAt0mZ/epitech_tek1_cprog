/*
** copy.c for bistromathique in /home/parejo_p/bistromathique
** 
** Made by pelayo parejopagador
** Login   <parejo_p@epitech.net>
** 
** Started on  Fri Nov  9 18:55:51 2012 pelayo parejopagador
** Last update Sat Nov 10 18:41:55 2012 pelayo parejopagador
*/

#include <stdlib.h>
#include "h_list.h"

unsigned int	my_copy_ops(char *str, t_list *elem, unsigned int i, char *ops)
{
  unsigned int	j;

  elem->data = xmalloc(sizeof(char) * (wordlenght(str, i, ops) + 2));
  j = 0;
  while (partial_ops(str, i, ops) == 0 && str[i] != '\0')
    {
      elem->data[j] = str[i];
      i++;
      j++;
    }
  elem->data[j] = '\0';
  return (i);
}

unsigned int	copy_one_ops(char *str, t_list *elem, unsigned int i)
{
  elem->data = xmalloc(sizeof(char) * 2);
  elem->data[0] = str[i];
  elem->data[1] = '\0';
  return(i + 1);
}

unsigned int	my_copy_base(char *str, t_list *elem, unsigned int i, char *ops)
{
  unsigned int	j;
 
  elem->data = xmalloc(sizeof(char) * (wordlenght(str, i, ops) + 1));
  j = 0;
  while (is_ops(str, i, ops) == 1 && str[i] != '\0')
    {
      elem->data[j] = str[i];
      i++;
      j++;
    }
  elem->data[j] = '\0';
  return (i);
}

unsigned int	multi_ops(char *str, t_list *elem, unsigned int i, char *ops)
{
  unsigned j;

  i = my_copy_ops(str, elem, i, ops);
  j = minus_substitute(elem, ops, i, str);
  while (is_ops(str, i, ops) == 1 && str[i] != '\0')
    {
      elem->data[j] = str[i];
      i++;
      j++;
    }
  if (str[i] == ops[0])
    {
      elem->data[j] = str[i];
      i++;
      j++;
    }
  elem->data[j] = '\0';
  return(i);
}

int	minus_substitute(t_list *list, char *ops, unsigned int k, char *str)
{
  unsigned int	j;
  unsigned int	i;

  i = -1;
  j = 0;
  while (list->data[++i] != '\0')
    {
      if (list->data[i] == ops[3])
	j++;
    }
  free (list->data);
  if (j % 2 == 1)
    {
      list->data = xmalloc(sizeof(char) * wordlenght(str, k, ops) + 3);
      list->data[0] = ops[3];
    }
  else if (j % 2 == 0)
    list->data = xmalloc(sizeof(char) * wordlenght(str, k, ops) + 2);
  return (j % 2);
}
