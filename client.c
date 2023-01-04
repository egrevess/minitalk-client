
#include "client.h"

void	ft_send(t_struct *var, int av1)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (var->tab[i])
	{
		j = 0;
		while (var->tab[i][j])
		{
			if (var->tab[i][j] == '0')
			{
				kill(av1, SIGUSR1);
				printf("%c",var->tab[i][j]);
			}
			else if (var->tab[i][j] == '1')
			{
				kill(av1, SIGUSR2);
				printf("%c",var->tab[i][j]);
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int			i;
	t_struct	var;

	i = 0;
	var.tab = malloc(sizeof(char*) * (ft_strlen(av[2]) + 1));
	if (!var.tab)
		return(0);
	while (av[2][i])
	{
		var.tab[i] = malloc(sizeof(char*) * 9);
		if (!var.tab[i])
			return(0);
		var.tab[i] = ft_putnbr_base(av[2][i]);
		if (ft_strlen(var.tab[i]) <= 8)
			var.tab[i] = ft_put_zero(var.tab[i]);
		i++;
	}
	var.tab[i] = NULL;
	ft_send(&var, atoi(av[1]));
	return (0);
}