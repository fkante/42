#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int n;
	int nb;
	
	i = 0;
	n = 1;
	nb = 0;
	
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		n = -n;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * n);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return(0);
	printf("ft_atoi = %d\n", ft_atoi(av[1]));
	printf("atoi = %d\n", atoi(av[1]));
	return(0);	
}
