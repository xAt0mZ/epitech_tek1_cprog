/*
** free_list.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Jan  4 19:30:01 2013 louis-philippe baron
** Last update Sat Jan  5 12:25:38 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

int		free_list(t_list *list)
{
  t_list	*tmp;
  t_list	*elem;

  elem = list;
  while (elem)
    {
      tmp = elem->next;
      free(elem);
      elem = tmp;
    }
  return (0);
}
