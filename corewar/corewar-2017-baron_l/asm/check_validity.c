/*
** check_validity.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 22 17:35:16 2013 louis-philippe baron
** Last update Sat Mar 30 21:49:32 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	check_len(t_list *list)
{
  t_list	*tmp;
  int		k;

  tmp = list;
  k = 0;
  while (tmp)
    {
      k++;
      tmp = tmp->next;
    }
  if (k < 2)
    {
      my_putstr("Incomplete header\n");
      return (INVALID);
    }
  return (0);
}

static int	check_header(t_list *list)
{
  if (my_strcmp(list->command, NAME_CMD_STRING) == ERROR
      || my_strcmp(list->next->command, COMMENT_CMD_STRING) == ERROR
      || my_strlen(list->args) > PROG_NAME_LENGTH
      || my_strlen(list->next->args) > COMMENT_LENGTH)
    {
      my_putstr("Invalid header\n");
      return (INVALID);
    }
  return (0);
}

int		check_validity(t_list *list)
{
  int		ret;

  if (check_len(list) == INVALID
      || check_header(list) == INVALID
      || check_labels(list) == INVALID)
    return (INVALID);
  ret = check_args(list);
  if (ret == ERROR || ret == INVALID)
    {
      if (ret == ERROR)
	my_putstr("Malloc failed during file validity checking\n");
      return (ret);
    }
  return (0);
}
