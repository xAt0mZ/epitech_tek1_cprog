/*
** label_exist.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 29 21:16:41 2013 louis-philippe baron
** Last update Sat Mar 30 02:21:01 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		label_exist(char *str, t_list *list, t_list *tmp)
{
  t_list	*cur;

  cur = list;
  while (cur)
    {
      if (cur->label == 1 && cur->command[0])
	{
	  if (my_strcmp(cur->command, str) == 0)
	    return (0);
	}
      cur = cur->next;
    }
  my_put_error(UNDEF_LABEL, tmp->pos);
  return (INVALID);
}
