#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return(0);
	while (i < nb)
	{
		if (nb % i == 0)
			return(0);
		else
			i++;
	}
	return (1);
}

int		main()
{
	int nb;

	nb = 101;
	printf("prime = %d\n", ft_is_prime(nb));
	return (0);	
}
