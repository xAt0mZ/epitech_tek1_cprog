/*
** w_direct.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar 27 14:46:46 2013 louis-philippe baron
** Last update Sun Mar 31 19:29:40 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	fill_tab(unsigned int nb, unsigned char *buffer)
{
  int		i;

  i = DIR_SIZE - 1;
  while (i >= 0)
    {
      buffer[i] = nb % 256;
      nb /= 256;
      i--;
    }
  return (0);
}

int		w_direct(t_all *all, char *line, t_list *list)
{
  unsigned char	buffer[DIR_SIZE];
  int		i;
  int		res;

  if (list->op_tab_line == 8 || list->op_tab_line == 11
      || list->op_tab_line == 14 || list->op_tab_line == 9
      || list->op_tab_line == 13 || list->op_tab_line == 10)
    {
      i = w_indirect(all, line, list);
      return (i);
    }
  i = 0;
  while (i < DIR_SIZE)
    buffer[i++] = 0;
  if (line[1] == LABEL_CHAR)
    res = get_label(list, all, &line[2]);
  else
    res = my_getnbr(&line[1]);
  fill_tab((unsigned int)res, buffer);
  if (my_write(all->fd, buffer, DIR_SIZE) == -1)
    return (ERROR);
  return (0);
}
