/*
** bsq.c for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Dec  4 09:38:31 2012 louis-philippe baron
** Last update Tue Dec  4 18:15:16 2012 louis-philippe baron
*/

#include	"hbsq.h"

int		bsq(char *str)
{
  int		fd;
  char		**file;
  char		*line;
  int		linenbr;

  if ((fd = open(str, O_RDONLY)) == -1)
    {
      my_putstr("File can't be open\n");
      return (ERROR);
    }
  if ((line = get_next_line(fd)) == NULL)
    return (ERROR);
  linenbr = my_getnbr(line);
  free(line);
  if ((file = get_file(fd, linenbr)) == NULL)
    return (ERROR);
  if (find_square(file, linenbr) != ERROR)
    sort_wdtb(file);
  free_file(file);
  close(fd);
  return (0);
}
