#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb % 2 == 0)
		return (0);
	while (i < nb / i)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb == 1 || nb == 0)
		return (0);
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

int		main()
{
	int nb;

	nb = 2147483630;
	printf("prime = %d\n", ft_find_next_prime(nb));
	return (0);
}
