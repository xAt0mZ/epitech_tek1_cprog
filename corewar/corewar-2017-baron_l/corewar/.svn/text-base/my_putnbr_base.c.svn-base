/*
** my_putnbr_base.c for corewar_vm in /home/garner_p/Workplace/C_Prog_Elem/corewar-2017-baron_l/vm
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Fri Mar 22 16:22:24 2013 Garnero Philip
** Last update Mon Mar 25 15:20:12 2013 Garnero Philip
*/

#include	"core.h"

void	puttnbrbase(int result, int lenghtmax, int nbr, char *base)
{
  if (nbr != 0)
    {
      result = (nbr % lenghtmax);
      nbr = nbr / lenghtmax;
      puttnbrbase(result, lenghtmax, nbr, base);
      my_putchar(base[result]);
    }
}

int	my_putnbr_base(unsigned char nbr, char *base)
{
  int	result;
  int	lenghtmax;

  result = 0;
  lenghtmax = my_strlen(base);
  if (nbr == 0)
    my_putstr("00");
  else if (nbr < 16)
    my_putchar('0');
  puttnbrbase(result, lenghtmax, nbr, base);
  return (nbr);
}
