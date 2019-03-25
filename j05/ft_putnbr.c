#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_max(int nb)
{
	int 	i;
	char 	*c;

	i = 0;
	c = "-2147483648";
	while (c[i])
	{
		ft_putchar(c[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int i;

	i = 0;
	if (nb == -2147483648)
		ft_max(nb);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		if (nb <= 9)
			ft_putchar((nb % 10) + '0');

	}
}

int	main()
{
	int i;

	i = 2147483;
	ft_putnbr(i);
	ft_putchar('\n');
	return(0);
}
