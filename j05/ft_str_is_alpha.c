#include <string.h>
#include <stdio.h>


int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
				||  (str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("ft_str_is_alpha = %d\n", ft_str_is_alpha(av[1]));
	return(0);
}

