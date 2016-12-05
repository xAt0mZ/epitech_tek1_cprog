/*
** get_next_line.c for get_next_line in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov 15 14:02:55 2012 louis-philippe baron
** Last update Fri Nov 23 14:57:27 2012 louis-philippe baron
*/

#include	"get_next_line.h"

int		check_n(char *tmp)
{
  int		i;
  int		n;

  i = 0;
  n = 0;
  while (tmp[i])
    {
      if (tmp[i] == '\n')
	n++;
      i++;
    }
  return (n);
}

char		*my_realloc(char *buffer, char *tmp)
{
  char		*str;
  int		i;
  int		j;

  j = 0;
  i = 0;
  while (tmp[i])
    i++;
  if ((str = malloc((i + READSIZE) * sizeof(char))) == NULL)
    return (NULL);
  i = 0;
  while (tmp[i])
    {
      str[i] = tmp[i];
      i++;
    }
  while (buffer[j])
    {
      str[i] = buffer[j];
      i++;
      j++;
    }
  str[i] = 0;
  free(tmp);
  return (str);
}

char		*res_and_save(char *tmp, char *save)
{
  int		i;
  int		j;
  int		k;

  i = 0;
  j = 0;
  while (tmp[i] != '\n')
    i++;
  tmp[i++] = '\0';
  k = i;
  while (tmp[i])
    i++;
  if ((save = malloc((i - k + 1) * sizeof(char))) == NULL)
    return (NULL);
  i = k;
  while (tmp[i])
    save[j++] = tmp[i++];
  save[j] = 0;
  return (save);
}

char		*get_next_line(const int fd)
{
  char		*buffer;
  char		*tmp;
  int		i;
  static int	state = 0;
  static char	*save;
  int		rd;

  /* if (state == 0) */
  /*   { */
      i = 0;
      if ((buffer = malloc((READSIZE + 1) * sizeof(char))) == NULL
	  || (tmp = malloc((READSIZE + 1) * sizeof(char))) == NULL)
	return (NULL);
      rd = read(fd, buffer, READSIZE);
      buffer[rd] = '\0';
      while (buffer[i])
	{
	  tmp[i] = buffer[i];
	  tmp[++i] = 0;
	}
      state++;
    /* } */
  while (check_n(tmp) == 0)
    {
      if ((tmp = my_realloc(buffer, tmp)) == NULL)
	return (NULL);
      read(fd, buffer, READSIZE);
    }
  if (read(fd, buffer, READSIZE) == 0)
    return (NULL);
  if ((save = res_and_save(tmp, save)) == NULL)
    return (NULL);
  return(tmp);
}
