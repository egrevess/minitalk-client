#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base(int nb, int base)
{
	int	temp;

	temp = 0;
	if (nb >= base)
	{
		ft_putnbr_base(nb / base, base);
		nb = nb % base;
	}
	if (nb < base)
	{
		printf("%d", nb);
	}
}

int main(int ac, char **av)
{
	int	i;
	i = 0;
	ft_putnbr_base(av[1], 2);
	return(0);
}