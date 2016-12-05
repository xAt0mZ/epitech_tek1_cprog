/*
** w_header.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Mar 30 14:45:59 2013 louis-philippe baron
** Last update Sun Mar 31 17:02:31 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	big_endian(int nb)
{
  unsigned char	tmp[4];
  int		i;
  int		res;

  i = 0;
  while (i < 4)
    {
      tmp[i] = nb % 256;
      nb /= 256;
      i++;
    }
  res = 0;
  i = 0;
  while (i < 4)
    {
      res = res * 256 + tmp[i];
      i++;
    }
  return (res);
}

static int	my_strcpy(char *res, char *str, int length)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (str[i])
    {
      res[j] = str[i];
      i++;
      j++;
    }
  while (j <= length)
    {
      res[j] = 0;
      j++;
    }
  return (0);
}

static int	fill_header(char *header, int size)
{
  int		i;

  i = 0;
  while (i < size)
    {
      header[i] = 0;
      i++;
    }
  return (0);
}

int		w_header(t_all *all)
{
  t_header	header;
  t_list	*list;

  fill_header((char *)&header, sizeof(t_header));
  header.magic = big_endian(COREWAR_EXEC_MAGIC);
  list = all->list;
  my_strcpy(header.prog_name, list->args, PROG_NAME_LENGTH);
  header.prog_size = big_endian(define_prog_length(all));
  list = list->next;
  my_strcpy(header.comment, list->args, COMMENT_LENGTH);
  write(all->fd, &header, sizeof(t_header));
  return (0);
}
