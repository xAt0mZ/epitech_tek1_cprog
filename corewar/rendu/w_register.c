/*
** w_register.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Wed Mar 27 15:15:36 2013 louis-philippe baron
** Last update Sun Mar 31 16:41:03 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		w_register(int fd, char *line)
{
  char		buffer;
  int		res;

  res = my_getnbr(&line[1]);
  buffer = (char)res;
  if (write(fd, &buffer, 1) == -1)
    {
      my_putstr("Write of register failed\n");
      return (ERROR);
    }
  return (0);
}
