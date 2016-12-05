/*
** opt_errors.c for corewar_vm in /home/garner_p/Workplace/C_Prog_Elem/corewar-2017-baron_l/vm
**
** Made by Garnero Philip
** Login   <garner_p@epitech.net>
**
** Started on  Mon Mar 25 14:06:15 2013 Garnero Philip
** Last update Mon Mar 25 15:18:32 2013 Garnero Philip
*/

#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"core.h"
#include	"op.h"

void	str_error(char c, int i, char *str)
{
  if (i == 0)
    {
      my_putstr2("Missing argument for -");
      write(2, &c, 1);
      my_putstr2(" ! Exit.\n");
      exit(2);
    }
  else if (i == 1)
    {
      my_putstr2("You can't dump memory at a negative cycle !\n");
      exit(2);
    }
  else if (i == 2)
    {
      my_putstr2("Couldn't open ");
      if (str)
	my_putstr2(str);
      my_putstr2(". Be sure the file exist and permissions are allowed\n");
      exit(3);
    }
  else if (i == 3)
    {
      my_putstr("A prog number is already used !\n");
      exit(2);
    }
}

void	double_id(t_command *cur)
{
  int	i;
  int	j;

  i = 0;
  if (cur->total == 0)
    {
      my_putstr("You must enter at least one champion !\n");
      exit(2);
    }
  while (i < cur->total)
    {
      j = 0;
      while (j < cur->total)
	{
	  if (j != i && cur->beg[i].n == cur->beg[j].n)
	    str_error('\0', 3, NULL);
	  j = j + 1;
	}
      i = i + 1;
    }
}

void	take_champs(int argc, char **argv, int i, t_command *cur)
{
  int		j;

  j = 0;
  while (i < argc && j < 4)
    {
      if (my_strcmp(argv[i], "-n") == 0)
	{
	  if (argv[++i])
	    cur->beg[j].n = my_getnbr(argv[i]);
	  else
	    str_error('n', 0, NULL);
	}
      else if (my_strcmp(argv[i], "-a") == 0)
	{
	  if (argv[++i])
	    cur->beg[j].a = my_getnbr(argv[i]);
	  else
	    str_error('a', 0, NULL);
	}
      else
	cur->beg[j++].path = argv[i];
      i = i + 1;
    }
  cur->total = j;
  double_id(cur);
}

void	check_command(int argc, char **argv, t_command *cur)
{
  int		i;

  if (argc < 2)
    {
      my_putstr2("You must enter at least one file to load !\n");
      exit(2);
    }
  i = 1;
  init_command(cur);
  if (my_strcmp(argv[i], "-dump") == 0)
    {
      if (argv[++i])
	cur->cycles_to_dump = my_getnbr(argv[i++]);
      else
	{
	  my_putstr2("Missing argument for -dump !\n");
	  exit(2);
	}
    }
  take_champs(argc, argv, i, cur);
  check_id(cur);
}

