/*
** rotate_list.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Jan  6 14:32:42 2013 louis-philippe baron
** Last update Sun Jan  6 23:20:37 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

t_list		*rotate(t_list *list)
{
  t_list	*first;
  t_list	*tmp;

  first = list->next;
  tmp = list;
  while (tmp->next)
    tmp = tmp->next;
  tmp->next = list;
  list->next = NULL;
  my_putstr("ra ");
  return (first);
}
