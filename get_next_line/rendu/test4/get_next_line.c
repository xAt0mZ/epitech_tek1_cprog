/*
** get_next_line.c for get_next_line in /home/baron_l//local/rendu/piscine/projets/get_next_line/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Thu Nov 15 14:02:55 2012 louis-philippe baron
** Last update Wed Nov 21 18:29:11 2012 louis-philippe baron
*/

#include	"get_next_line.h"
#include	"my.h"

t_list		*put_buf_in_list(char *buffer, t_list *list)
{
  t_list        *elem;
  int		i;

  i = 0;
  while (i < ac)
    {
      elem = malloc(sizeof(*elem));
      if (elem == NULL)
	return (0);
      elem->data = buffer;
      if (list != NULL)
	list->next = elem;
      list = elem;
      i++;
    }
  return (list);
}

char		*get_next_line(const int fd)
{
  char		*buffer;
  static t_list	*list = NULL;

  if ((buffer = malloc(READSIZE * sizeof(char))) == NULL)
    return (NULL);
  read(fd, buffer, READSIZE);
  if ((list = put_buffer_in_list(buffer, list) == NULL))
    return (NULL);
}
