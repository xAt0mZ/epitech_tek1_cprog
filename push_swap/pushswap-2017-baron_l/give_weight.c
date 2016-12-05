/*
** give_weight.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Jan  6 14:05:08 2013 louis-philippe baron
** Last update Sun Jan  6 20:40:03 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

int		give_weight(t_list *l_a)
{
  t_list	*nb1;
  t_list	*nb2;

  nb1 = l_a;
  while (nb1)
    {
      nb2 = nb1->next;
      while (nb2)
	{
	  if (nb1->nb > nb2->nb)
	    nb1->weight += 1;
	  else if (nb1->nb < nb2->nb)
	    nb2->weight += 1;
	  else
	    return (ERROR);
	  nb2 = nb2->next;
	}
      nb1 = nb1->next;
    }
  return (0);
}
