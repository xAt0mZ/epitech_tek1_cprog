/*
** my_malloc.c for corewar_vm in /home/garner_p/Workplace/C_Prog_Elem/corewar-2017-baron_l/vm
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Wed Mar 20 18:03:03 2013 Garnero Philip
** Last update Sat Mar 30 22:19:07 2013 Garnero Philip
*/

#include	<stdlib.h>
#include	"core.h"

void	my_free(void *ptr)
{
  if (ptr != NULL)
    free(ptr);
  ptr = NULL;
}

void	cleaner(unsigned char *str, int max)
{
  int	i;

  i = 0;
  while (i < max)
    {
      str[i] = '\0';
      i = i + 1;
    }
}

void	*my_malloc(int size)
{
  void	*str;

  str = malloc(size);
  if (str == NULL)
    {
      my_putstr2("Can't perform malloc\n");
      exit(1);
    }
  cleaner(str, size);
  return (str);
}

unsigned char    *my_strcncpy(int pos, int lim, unsigned char *dest, unsigned char *src)
{
  int   length;

  length = 0;
  while (length <= lim)
    {
      dest[(pos % MEM_SIZE)] = src[length];
      length = length + 1;
      pos = pos + 1;
    }
  return (dest);
}

int     my_strcmp(char *s1, char *s2)
{
  int   j;

  j = 0;
  while (s1[j] == s2[j])
    {
      j = j + 1;
      if (j == my_strlen(s1) && j == my_strlen(s2))
        return (0);
    }
  if (s1[j] != s2[j])
    return (s1[j] - s2[j]);
  return (0);
}
