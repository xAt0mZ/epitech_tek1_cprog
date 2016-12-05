/*
** get_file.c for bsq in /home/baron_l//local/rendu/piscine/projets/bsq/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Dec  4 10:42:03 2012 louis-philippe baron
** Last update Tue Dec  4 11:35:12 2012 louis-philippe baron
*/

#include	"hbsq.h"

int		get_entire_file(char **file, int fd, int linenbr)
{
  int		k;
  char		*line;

  k = 0;
  while (k < linenbr)
    {
      if ((line = get_next_line(fd)) == NULL)
	return (ERROR);
      file[k] = line;
      k++;
    }
  return (0);
}

char		**get_file(int fd, int linenbr)
{
  char		**file;
  int		k;

  if ((file = malloc((linenbr + 1) * sizeof(char *))) == NULL)
    return (NULL);
  k = 0;
  while (k <= linenbr)
    {
      file[k] = NULL;
      k++;
    }
  if (get_entire_file(file, fd, linenbr) == ERROR)
    {
      free_file(file);
      return (NULL);
    }
  return (file);
}
