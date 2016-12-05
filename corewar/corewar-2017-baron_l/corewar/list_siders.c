/*
** list_siders.c for siders in /home/garner_p/Save/lib/functions
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Fri Dec 14 16:23:35 2012 Garnero Philip
** Last update Mon Mar 25 17:43:05 2013 Garnero Philip
*/

#include	<stdlib.h>
#include	"core.h"

int		free_loop(t_list *first)
{
  t_list	*vog;
  t_list	*tmp;

  vog = first;
  while (vog != NULL)
    {
      tmp = vog;
      vog = vog->next;
      free(tmp->cur);
      free(tmp);
    }
  first = NULL;
  return (0);
}

int		my_put_in_list(t_list **list, t_proc *cur)
{
  t_list	*elem;
  t_list	*tmp;

  elem = my_malloc(sizeof(*elem));
  elem->cur = cur;
  elem->next = NULL;
  if (*list == NULL)
    *list = elem;
  else
    {
      tmp = *list;
      while (tmp->next != NULL)
	tmp = tmp->next;
      tmp->next = elem;
    }
  return (0);
}

void		my_swap_link(t_list *tmp)
{
  t_proc	*temp;

  if (tmp->next != NULL)
    {
      temp = tmp->cur;
      tmp->cur = tmp->next->cur;
      tmp->next->cur = temp;
    }
}

void		sort(t_list *first)
{
  t_list	*tmp;

  tmp = first;
  while (tmp->next != NULL)
    {
      if (tmp->cur->id > tmp->next->cur->id)
	{
	  my_swap_link(tmp);
	  tmp = first;
	}
      else
	tmp = tmp->next;
    }
}

int		delete_mail(t_list **envi, t_list *tmp)
{
  t_list	*scd;

  if (tmp == NULL)
    return (1);
  scd = *envi;
  while (scd && scd->next != tmp)
    scd = scd->next;
  if (scd != NULL && tmp->next != NULL)
    scd->next = tmp->next;
  else if (scd != NULL && tmp->next == NULL)
    scd->next = NULL;
  else if (tmp->next != NULL && scd == NULL)
    *envi = tmp->next;
  else if (scd == NULL && tmp->next == NULL)
    *envi = NULL;
  my_free(tmp->cur->reg);
  my_free(tmp->cur->name);
  my_free(tmp->cur);
  my_free(tmp);
  return (0);
}
