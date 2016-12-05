/*
** epur_file.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Mar 25 14:40:43 2013 louis-philippe baron
** Last update Sun Mar 31 19:23:29 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	clean_str(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (str[i] == '\t')
	str[i] = ' ';
      i++;
    }
  return (0);
}

static	char	*copy(char *str, int size)
{
  char		*res;
  int		i;
  int		j;

  if ((res = malloc((size + 1) * sizeof(char))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (str[i])
    {
      if (str[i] != ' ' || (i && str[i] == ' ' && str[i - 1] != ' '
			    && str[i - 1] != SEPARATOR_CHAR))
	{
	  res[j] = str[i];
	  j++;
	}
      i++;
    }
  res[j] = '\0';
  if (j && res[j - 1] == ' ')
    res[j - 1] = '\0';
  return (res);
}

static char	*epur_str(char *str)
{
  int		i;
  int		j;
  char		*res;

  i = 0;
  j = 0;
  clean_str(str);
  while (str[i])
    {
      if (str[i] != ' ' || (i && str[i] == ' ' && str[i - 1] != ' '
			    && str[i - 1] != SEPARATOR_CHAR))
	j++;
      i++;
    }
  if ((res = copy(str, j)) == NULL)
    return (NULL);
  free(str);
  return (res);
}

char		**epur_file(char **file)
{
  int		k;
  int		j;

  k = 0;
  while (file[k])
    {
      if (k > 1 && (file[k] = epur_str(file[k])) == NULL)
	return (NULL);
      k++;
    }
  k = 0;
  while (file[k])
    {
      j = 0;
      while (file[k][j])
	{
	  if (file[k][j] == COMMENT_CHAR)
	    file[k][j] = '\0';
	  if (j && file[k][j] == COMMENT_CHAR && file[k][j - 1] == ' ')
	    file[k][j - 1] = '\0';
	  j++;
	}
      k++;
    }
  return (file);
}
