/*
** get_name_comment.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sat Mar 30 23:13:12 2013 louis-philippe baron
** Last update Wed Apr  3 13:33:51 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	clone_name(char *res, char *str)
{
  int		i;

  i = 0;
  while (str[i] && str[i] != ' ')
    {
      res[i] = str[i];
      i++;
    }
  res[i] = '\0';
  return (0);
}

static int	clone_comment(char *res, char *str)
{
  int		i;
  int		j;

  i = 0;
  while (str[i] && str[i] != '"')
    i++;
  i++;
  j = 0;
  while (str[i] && str[i] != '"')
    {
      res[j] = str[i];
      j++;
      i++;
    }
  res[j] = '\0';
  return (0);
}

char		**get_name_comment(char *str)
{
  char		**res;
  int		i;
  int		j;

  i = 0;
  if ((res = malloc(3 * sizeof(char *))) == NULL)
    return (NULL);
  while (str[i] && str[i] != ' ' /* && str[i] != '\t' */)
    i++;
  if ((res[0] = malloc((i + 1) * sizeof(char))) == NULL)
    return (NULL);
  while (str[i] && str[i] != '"')
    i++;
  j = i;
  i++;
  while (str[i] && str[i] != '"')
    i++;
  if ((res[1] = malloc((i - j + 1) * sizeof(char))) == NULL)
    return (NULL);
  res[2] = NULL;
  clone_name(res[0], str);
  clone_comment(res[1], str);
  return (res);
}
