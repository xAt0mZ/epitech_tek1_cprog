/*
** get_next_line.c for get_next_line in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov 15 14:02:55 2012 louis-philippe baron
** Last update Thu Nov 22 11:39:55 2012 louis-philippe baron
*/

#include	"get_next_line.h"
#include	"my.h"

int		my_strlen_to_n(char *buffer)
{
  int		i;

  i = 0;
  while (buffer[i] != '\n')
    i++;
  return (i);
}

int		check_n(char *buffer)
{
  int		i;
  int		n;

  i = 0;
  n = 0;
  while (i < READSIZE)
    {
      if (buffer[i] == '\n')
	n++;
      i++;
    }
  return (n);
}

char		*my_realloc(char *buffer, int size)
{
  char		*str;
  int		i;

  i = 0;
  str = malloc((size * READSIZE + READSIZE) * sizeof(char));
  while (i < size * READSIZE)
    {
      str[i] = buffer[i];
      i++;
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
    res[i++] = save[j++];
  j = 0;
  while (save[j] != '\0')
    save[j++] = '\0';
  j = 0;
  while (buffer[i] != '\n' && i < size * READSIZE)
    result[i++] = buffer[j++];
  result[i] = '\0';
  j = 0;
  while (i < size * READSIZE)
    save[j++] = buffer[i++];
  return (result);
}

char		*get_next_line(const int fd)
{
  int		rd;
  char		*buffer;
  char		*result;
  static char	save[READSIZE];
  int		size;

  size = 1;
  if ((buffer = malloc(READSIZE * sizeof(char))) == NULL)
    return (NULL);
  rd = read(fd, buffer, READSIZE);
  while (check_n(buffer) == 0 && rd != 0)
    {
      if ((buffer = my_realloc(buffer, size)) == NULL)
	return (NULL);
      rd = read(fd, buffer, READSIZE);
      size++;
    }
  if (check_n(buffer) != 0)
    {
      if ((result = malloc(my_strlen_to_n(buffer) * sizeof(char))) == NULL)
	return (NULL);
      result = cpy_buf_to_res(buffer, result, save, size);
      return (result);
    }
  if (rd == 0)
    return (NULL);
  return (buffer);
}
