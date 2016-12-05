/*
** get_file.c for lem_in in /home/baron_l//local/rendu/projets/c_prog_elem/lem_in/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Apr 10 10:55:20 2013 louis-philippe baron
** Last update Wed Apr 10 11:13:05 2013 louis-philippe baron
*/

#include	"hlemin.h"

static char	**my_realloc(char **tab, char *str)
{
  int		k;
  char		**res;

  k = 0;
  while (tab[k])
    k++;
  if ((res = malloc((k + 2) * sizeof(char *))) == NULL)
    return (NULL);
  k = 0;
  while (tab[k])
    {
      res[k] = tab[k];
      k++;
    }
  res[k] = str;
  res[k + 1] = NULL;
  free(tab);
  return (res);
}

char		**get_file()
{
  char		**res;
  char		*tmp;

  if ((res = malloc(sizeof(char *))) == NULL)
    return (NULL);
  res[0] = NULL;
  while ((tmp = get_next_line(0)))
    {
      if ((res = my_realloc(res, tmp)) == NULL)
	return (NULL);
    }
  return (res);
}
