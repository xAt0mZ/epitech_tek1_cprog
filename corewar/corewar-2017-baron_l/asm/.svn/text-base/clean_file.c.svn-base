/*
** clean_file.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Mar 28 14:35:04 2013 louis-philippe baron
** Last update Sat Mar 30 14:43:09 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	free_block(t_list *list)
{
  free(list->command);
  if (list->args)
    free(list->args);
  free(list);
  return (0);
}

static int	delete_mail(t_list **envi, t_list *tmp)
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
  free_block(tmp);
  return (0);
}

int		clean_file(t_list *begin)
{
  t_list	*tmp;

  tmp = begin;
  while (tmp)
    {
      if (tmp->command[0] == '\0')
	{
	  delete_mail(&begin, tmp);
	  tmp = begin;
	}
      else
	tmp = tmp->next;
    }
  return (0);
}
