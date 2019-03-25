#include <string.h>
#include <stdio.h>


int	ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		return(0);
	}
	return(1);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return(0);
	printf("ft_str_is_numeric = %d\n", ft_str_is_numeric(av[1]));
	return(0);
}

