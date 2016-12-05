/*
** get_next_line.c for get_next_line in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov 15 14:02:55 2012 louis-philippe baron
** Last update Tue Nov 20 17:57:42 2012 louis-philippe baron
*/

#include	"get_next_line.h"
#include	"my.h"

int		check_n(char *buffer)
{
  int		i;
  int		n;

  i = 0;
  n = 0;
  while (buffer[i] != '\0')
    {
      if (buffer[i] == '\n')
	n++;
      i++;
    }
  return (n);
}

void		move_in_buffer(char *buffer)
{
  int		i;
  int		j;

  j = 0;
  while (buffer[j] != '\n' && j < RESMAX)
    j++;
  if (buffer[j] == '\n')
    j++;
  i = 0;
  while (buffer[j] != '\0')
    {
      buffer[i] = buffer[j];
      i++;
      j++;
    }
  while (i < READSIZE)
    {
      buffer[i] = '\0';
      i++;
    }
}

char		*cpy_to_res(char *buffer, char *result)
{
  int		i;

  i = 0;
  while (buffer[i] != '\n' && i < RESMAX)
    {
      result[i] = buffer[i];
      i++;
    }
  result[i] = '\0';
  return (result);
}

char		*get_next_line(const int fd)
{
  int		rd;
  static char	buffer[READSIZE];
  char		*result;
  static int	i = 0;

  while (i < READSIZE)
    {
      buffer[i] = '\0';
      i++;
    }
  if (my_strlen(buffer) < RESMAX && check_n(buffer) == 0)
    {
      rd = read(fd, buffer, READSIZE - my_strlen(buffer));
      if (rd == 0)
	return (NULL);
    }
  result = my_malloc(RESMAX);
  result = cpy_to_res(buffer, result);
  move_in_buffer(buffer);
  return (result);
}
