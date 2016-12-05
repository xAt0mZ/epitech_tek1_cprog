/*
** put_opcode.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar 26 16:05:14 2013 louis-philippe baron
** Last update Sun Mar 31 19:54:56 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		put_opcode(t_list *list, t_all *all)
{
  if (write(all->fd, &(op_tab[list->op_tab_line].code), 1) == -1)
    {
      my_putstr("Write of opcode failed\n");
      return (ERROR);
    }
  return (0);
}
