/*
** utils.c for corewar_vm in /home/garner_p/Workplace/C_Prog_Elem/vm
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Tue Mar 26 14:38:41 2013 Garnero Philip
** Last update Sat Mar 30 16:58:46 2013 Garnero Philip
*/

#include	"core.h"
#include	"op.h"

int	cir(int i)
{
  while (i < 0)
    i = MEM_SIZE + i;
  i = i % MEM_SIZE;
  return (i);
}

unsigned char	*return_reg(t_list *tmp, int nbr)
{
  int		i;
  int		j;
  unsigned char	*tmpreg;

  if (nbr < 1 || nbr > REG_NUMBER)
    nbr = 1;
  i = (nbr * REG_SIZE) - REG_SIZE;
  tmpreg = my_malloc(REG_SIZE);
  j = 0;
  while (j < REG_SIZE)
    {
      tmpreg[j] = tmp->cur->reg[(i + j) % (REG_SIZE * REG_NUMBER)];
      j = j + 1;
    }
  return (tmpreg);
}

unsigned char	*return_dir(t_list *tmp, int place)
{
  int		j;
  unsigned char	*tmpdir;

  tmpdir = my_malloc(DIR_SIZE);
  j = 0;
  while (j < DIR_SIZE)
    {
      tmpdir[j] = AM[cir(place + j)];
      j = j + 1;
    }
  return (tmpdir);
}

long long	put_char_into_long(unsigned char *str, int size)
{
  long long	ret;
  long long	cha;
  int		i;

  ret = 0;
  i = 0;
  while (i < size)
    {
      cha = str[i];
      ret = (ret * 256) + cha;
      i = i + 1;
    }
  if (UC(str[0] >> 7) == 1)
    ret = ret | 0x8000000000000000;
  return (ret);
}

long long	return_ind_place(t_list *tmp, int place, int mod)
{
  long long	i;
  int		j;
  unsigned char	*tmpind;

  tmpind = my_malloc(IND_SIZE);
  j = 0;
  while (j < IND_SIZE)
    {
      tmpind[j] = AM[cir(place + j)];
      j = j + 1;
    }
  i = put_char_into_long(tmpind, IND_SIZE);
  if (mod == 1)
    i = i % IDX_MODE;
  my_free(tmpind);
  return (i);
}

unsigned char	*return_ind(t_list *tmp, int place, int mod, int size)
{
  long long	i;
  int		j;
  unsigned char	*tmpind;

  i = return_ind_place(tmp, place, mod);
  tmpind = my_malloc(size);
  j = 0;
  while (j < size)
    {
      tmpind[j] = AM[cir(tmp->cur->pc + i + j)];
      j = j + 1;
    }
  return (tmpind);
}
