/*
** my_open.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Fri Mar 22 17:40:19 2013 louis-philippe baron
** Last update Sat Mar 30 02:43:40 2013 louis-philippe baron
*/

#include	"hcorewar.h"

int		my_open(char *str)
{
  int		fd;

  if (my_strcmp(str, ".s") == ERROR)
    {
      my_putstr("File is not a .s file\n");
      return (ERROR);
    }
  if ((fd = open(str, O_RDONLY)) == -1)
    {
      my_putstr("Can't open file : ");
      my_putstr(str);
      my_putchar('\n');
      return (ERROR);
    }
  return (fd);
}
