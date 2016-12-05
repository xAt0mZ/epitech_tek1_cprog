/*
** push_list.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Jan  6 14:32:05 2013 louis-philippe baron
** Last update Sun Jan  6 23:20:09 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

t_list		*push_to_sec_arg(t_list *l_a, t_list **l_b, int i)
{
  t_list	*first;

  first = l_a->next;
  l_a->next = *l_b;
  *l_b = l_a;
  if (i == 1)
    my_putstr("pb ");
  else
    my_putstr("pa ");
  return (first);
}
