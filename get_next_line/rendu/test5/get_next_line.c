/*
** get_next_line.c for get_next_line in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov 15 14:02:55 2012 louis-philippe baron
** Last update Thu Nov 22 15:47:56 2012 louis-philippe baron
*/

#include	"get_next_line.h"
#include	"my.h"

int		check_n(char *buffer, char c)
{
  int		i;
  int		n;

  i = 0;
  n = 0;
  if (c == 'n')
    {
      while (i < READSIZE)
	{
	  if (buffer[i] == '\n')
	    n++;
	  i++;
	}
      return (n);
    }
  else if (c == 's')
    {
      while (buffer[i] != '\n' && buffer[i] != '\0')
	i++;
      return (i);
    }
  return (0);
}

char		*my_realloc(char *buffer, int size, char *bufread)
{
  char		*str;
  int		i;
  int		j;

  j = 0;
  i = 0;
  str = malloc((size * READSIZE) * sizeof(char));
  while (i < size * READSIZE)
    {
      str[i] = buffer[i];
      i++;
    }
  while (j < READSIZE)
    {
      str[i] = bufread[j];
      i++;
      j++;
    }
  free(buffer);
  return (str);
}

char		*cpy_buf_to_res(char *buffer, char *result, char *save, int size)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (save[j] != '\0')
    result[i++] = save[j++];
  j = 0;
  while (save[j] != '\0')
    save[j++] = '\0';
  j = 0;
  while (buffer[i] != '\n' && i < size * READSIZE)
    result[i++] = buffer[j++];
  result[i] = '\0';
  i = 0;
  while (j < READSIZE)
    save[i++] = buffer[j++];
  return (result);
}

char		*finish(char *buffer, char *save, int size)
{
  char		*result;

  if ((result = malloc(check_n(buffer, 's') * sizeof(char))) == NULL)
    return (NULL);
  result = cpy_buf_to_res(buffer, result, save, size);
  return (result);
}

char		*get_next_line(const int fd)
{
  int		rd;
  char		*buffer;
  char		bufread[READSIZE];
  static char	save[READSIZE];
  int		size;
  char		*result;

  size = 1;
  if ((buffer = malloc(READSIZE * sizeof(char))) == NULL)
    return (NULL);
  rd = read(fd, bufread, READSIZE);
  while (check_n(bufread, 'n') == 0 && rd != 0)
    {
      if ((buffer = my_realloc(buffer, size, bufread)) == NULL)
	return (NULL);
      rd = read(fd, bufread, READSIZE);
      size++;
    }
  if (check_n(bufread, 'n') != 0)
    result = finish(buffer, save, size);
  if (rd == 0)
    return (NULL);
  return (result);
}
