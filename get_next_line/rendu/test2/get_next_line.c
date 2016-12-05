/*
** get_next_line.c for get_next_line in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Nov 20 17:58:23 2012 louis-philippe baron
** Last update Wed Nov 21 13:04:50 2012 louis-philippe baron
*/

#include	"get_next_line.h"
#include	"my.h"

char		*write_res(char *buffer, char *res, char *save)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (buffer[i] != '\n' && i < RESMAX)
    {
      res[i] = buffer[i];
      i++;
    }
  res[i] = '\0';
  if (buffer[i] == '\n')
    i++;
  while (buffer[i] != '\0')
    {
      save[j] = buffer[i];
      j++;
      i++;
    }
  save[j] = '\0';
  return (save);
}

char		*get_next_line(const int fd)
{
  char		*buffer;
  char		*result;
  static char	save[RESMAX + READSIZE];
  int		i;
  int		rd;

  i = 0;
  result = my_malloc(RESMAX);
  if (READSIZE < RESMAX)
    {
      buffer = my_malloc(RESMAX);
      while (i < RESMAX)
	{
	 rd = read(fd, buffer, READSIZE);
	  i += READSIZE;
	}
    }
  else
    {
      buffer = my_malloc(READSIZE);
     rd = read(fd, buffer, READSIZE);
    }
  if (rd == 0 && result[0] == '\0')
    return (NULL);
  write_res(buffer, result, save);
  free(buffer);
  return (result);
}
