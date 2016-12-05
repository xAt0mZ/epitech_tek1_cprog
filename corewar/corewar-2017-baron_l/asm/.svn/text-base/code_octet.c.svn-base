/*
** code_octet.c for corewar asm in /home/baron_l//local/rendu/projets/c_prog_elem/corewar/rendu
** 
** Made by louis-philippe baron
** Login   <baron_l@epitech.net>
** 
** Started on  Tue Mar 26 19:50:01 2013 louis-philippe baron
** Last update Sun Mar 31 19:53:24 2013 louis-philippe baron
*/

#include	"hcorewar.h"

static int	init_octet(char *octet)
{
  int		i;

  i = 0;
  while (i < 8)
    octet[i++] = '0';
  octet[i] = 0;
  return (0);
}

static int	fill_octet(int i, char *av, char *octet)
{
  if (av[0] == 'r')
    {
      octet[i++] = '0';
      octet[i++] = '1';
    }
  else if (av[0] == DIRECT_CHAR)
    {
      octet[i++] = '1';
      octet[i++] = '0';
    }
  else
    {
      octet[i++] = '1';
      octet[i++] = '1';
    }
  return (0);
}

static int	write_octet(int fd, char *octet)
{
  unsigned char	res;

  res = my_getnbr_base(octet, "01");
  if (write(fd, &res, 1) == -1)
    {
      my_putstr("Write of param octet failed\n");
      return (ERROR);
    }
  return (0);
}

int		code_octet(int fd, char **av)
{
  char		octet[9];
  int		i;
  int		k;

  k = 0;
  i = 0;
  init_octet(octet);
  while (av[k])
    {
      fill_octet(i, av[k], octet);
      i += 2;
      if (i == 8)
	{
	  if (write_octet(fd, octet) == ERROR)
	    return (ERROR);
	  init_octet(octet);
	}
      k++;
    }
  if (write_octet(fd, octet) == ERROR)
    return (ERROR);
  return (0);
}
