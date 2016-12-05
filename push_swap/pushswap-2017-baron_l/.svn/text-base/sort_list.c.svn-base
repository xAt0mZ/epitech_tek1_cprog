/*
** sort_list.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Jan  6 14:47:24 2013 louis-philippe baron
** Last update Sun Jan  6 23:27:12 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

t_list		*sort_list(t_list *la, t_list *lb, int i)
{
  int		w;

  w = 0;
  while (la)
    {
      if (la->weight > w)
	la = rotate(la);
      else
	{
	  la = push_to_sec_arg(la, &lb, 1);
	  w++;
	}
      if (i == 1)
	show_list(la, lb);
    }
  while (lb)
    {
      lb = push_to_sec_arg(lb, &la, 0);
      if (i == 1)
	show_list(la, lb);
    }
  if (i == 0)
    my_putchar('\n');
  return (la);
}
