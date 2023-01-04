#ifndef CLIENT_H
# define CLIENT_H

# include <unistd.h>
# include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>

typedef struct s_struct
{
	char **tab;
}	t_struct;

char	*ft_put_zero(char *str);
char	*ft_putnbr_base(int n);
int		ft_strlen(char *str);

#endif