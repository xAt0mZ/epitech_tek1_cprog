/*
** w_indirect.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar 27 14:48:38 2013 louis-philippe baron
** Last update Sun Mar 31 19:29:33 2013 louis-philippe baron
*/

#include	"hcorewar.h"


static int	fill_tab(unsigned int nb, unsigned char *buffer)
{
  int		i;

  i = IND_SIZE - 1;
  while (i >= 0)
    {
      buffer[i] = nb % 256;
      nb /= 256;
      i--;
    }
  return (0);
}

int		w_indirect(t_all *all, char *line, t_list *list)
{
  unsigned char	buffer[IND_SIZE];
  int		i;
  int		res;

  i = 0;
  while (i < IND_SIZE)
    buffer[i++] = 0;
  if (line[0] == DIRECT_CHAR)
    {
      if (line[1] == LABEL_CHAR)
	res = get_label(list, all, &line[2]);
      else
	res = my_getnbr(&line[1]);
    }
  else
    {
      if (line[0] == LABEL_CHAR)
	res = get_label(list, all, &line[1]);
      else
	res = my_getnbr(line);
    }
  fill_tab((unsigned int)res, buffer);
  if (my_write(all->fd, buffer, IND_SIZE) == -1)
    return (ERROR);
  return (0);
}
