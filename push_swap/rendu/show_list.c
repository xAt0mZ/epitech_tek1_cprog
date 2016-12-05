/*
** show_list.c for push_swap in /home/baron_l//local/rendu/projets/c_prog_elem/push_swap/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Jan  4 19:37:16 2013 louis-philippe baron
** Last update Sun Jan  6 23:28:50 2013 louis-philippe baron
*/

#include	"hpush_swap.h"

int		show_list(t_list *la, t_list *lb)
{
  t_list	*elem;

  elem = la;
  my_putstr("\nla : ");
  while (elem)
    {
      my_putnbr(elem->nb);
      my_putchar(' ');
      elem = elem->next;
    }
  my_putchar('\n');
  elem = lb;
  my_putstr("lb : ");
  while (elem)
    {
      my_putnbr(elem->nb);
      my_putchar(' ');
      elem = elem->next;
    }
  my_putstr("\n");
  return (0);
}
