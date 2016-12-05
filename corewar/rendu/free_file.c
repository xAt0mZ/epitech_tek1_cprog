/*
** free_file.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Mar 25 16:02:41 2013 louis-philippe baron
** Last update Fri Mar 29 14:18:10 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		free_tab(char **file)
{
  int		k;

  k = 0;
  while (file[k])
    {
      free(file[k]);
      k++;
    }
  free(file);
  return (0);
}

int		free_list(t_list *list)
{
  t_list	*tmp;

  while (list)
    {
      tmp = list->next;
      free(list->command);
      if (list->args)
	free(list->args);
      free(list);
      list = tmp;
    }
  return (0);
}
