/*
** my_write.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Sun Mar 31 16:12:08 2013 louis-philippe baron
** Last update Sun Mar 31 19:38:41 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		my_write(int fd, unsigned char *buffer, int size)
{
  if (write(fd, buffer, size) == -1)
    {
      my_putstr("My_write failed\n");
      return (ERROR);
    }
  return (0);
}
