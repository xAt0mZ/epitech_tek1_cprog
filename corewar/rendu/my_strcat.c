/*
** my_strcat.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar 27 14:44:59 2013 louis-philippe baron
** Last update Wed Mar 27 14:45:19 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	length(char *s1)
{
  int		i;

  i = 0;
  while (s1[i])
    {
      if (s1[i] == '.' && s1[i + 1] == 's')
	return (i);
      i++;
    }
  return (i);
}

char		*my_strcat(char *s1, char *s2)
{
  char		*res;
  int		i;
  int		j;

  if ((res = malloc((length(s1) + my_strlen(s2) + 1) * sizeof(char))) == NULL)
    return (NULL);
  i = 0;
  j = 0;
  while (s1[i])
    {
      if (s1[i] == '.' && s1[i + 1] == 's')
	i += 2;
      else if (s1[i] == '.' && s1[i + 1] == '\0')
	i++;
      else
	res[j++] = s1[i++];
    }
  i = 0;
  while (s2[i])
    res[j++] = s2[i++];
  res[j] = '\0';
  return (res);
}
