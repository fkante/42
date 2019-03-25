#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
		ft_putchar('\n');
}

int	main(int ac, char **av)
{
	if (ac == 1)
		return(0);
	ft_putstr(av[1]);
	return(0);
}
