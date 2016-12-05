
#ifndef	PROJET_H_
#define	PROJET_H_

#include	<unistd.h>

#define	ERROR	(1)

typedef	struct	s_conf
{
  int		row;
  int		max;
  int		difficulty;
  int		mode;
}		t_conf;

void		my_putchar(char);
void		my_putstr(char *);

#endif
