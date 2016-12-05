/*
** cut_args.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar 26 19:45:55 2013 louis-philippe baron
** Last update Fri Mar 29 14:45:36 2013 louis-philippe baron
*/

#include	"hcorewar.h"

char		**cut_args(char *line)
{
  char		**res;
  char		tmp[2];

  tmp[0] = SEPARATOR_CHAR;
  tmp[1] = 0;
  if ((res = my_str_to_wordtab(line, tmp)) == NULL)
    {
      my_putstr("Malloc failed\n");
      return (NULL);
    }
  return (res);
}
