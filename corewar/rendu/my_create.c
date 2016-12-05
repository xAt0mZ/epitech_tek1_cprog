/*
** my_create.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Mon Mar 25 17:57:39 2013 louis-philippe baron
** Last update Sun Mar 31 19:37:59 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		my_create(char *str)
{
  char		*new;
  int		fd;

  if ((new = my_strcat(str, ".cor")) == NULL
      || (fd = open(new, O_RDWR | O_CREAT | O_TRUNC,
		    S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH)) == -1)
    {
      my_putstr("Problem while creating .cor file\n");
      return (ERROR);
    }
  free(new);
  return (fd);
}
