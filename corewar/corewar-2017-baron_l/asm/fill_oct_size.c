/*
** fill_oct_size.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Mar 30 16:12:19 2013 louis-philippe baron
** Last update Sat Mar 30 17:47:34 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		fill_oct_size(t_list *list, int size)
{
  int		res;

  if (list->op_tab_line == 8 || list->op_tab_line == 11
      || list->op_tab_line == 14 || list->op_tab_line == 9
      || list->op_tab_line == 13 || list->op_tab_line == 10)
    res = IND_SIZE;
  else
    res = size;
  return (res);
}
