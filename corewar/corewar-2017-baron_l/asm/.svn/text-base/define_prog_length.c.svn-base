/*
** define_prog_length.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Mar 30 14:49:13 2013 louis-philippe baron
** Last update Sat Mar 30 22:46:56 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		define_prog_length(t_all *all)
{
  t_list	*list;
  int		res;

  list = all->list->next->next;
  res = 0;
  while (list)
    {
      res += list->oct_size;
      list = list->next;
    }
  return (res);
}
