/*
** get_file.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 22 17:35:53 2013 louis-philippe baron
** Last update Sat Mar 30 02:44:49 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	check_end(int fd)
{
  int		rd;
  char		buffer[2];

  rd = read(fd, buffer, 1);
  close(fd);
  if (rd == 0)
    return (0);
  return (ERROR);
}

static char	**my_realloc(char **file, int size)
{
  char		**res;
  int		k;

  if ((res = malloc(size)) == NULL)
    return (NULL);
  k = 0;
  while (file[k])
    {
      res[k] = file[k];
      k++;
    }
  res[k + 1] = NULL;
  free(file);
  return (res);
}

char		**get_file(int fd)
{
  char		**file;
  char		*tmp;
  int		k;

  if ((file = malloc(sizeof(char *))) == NULL)
    return (NULL);
  k = 0;
  file[k] = NULL;
  while ((tmp = get_next_line(fd)))
    {
      if ((file = my_realloc(file, (k + 2) * sizeof(char *))) == NULL)
	return (NULL);
      file[k] = tmp;
      k++;
    }
  if (check_end(fd) == ERROR)
    return (NULL);
  return (file);
}
