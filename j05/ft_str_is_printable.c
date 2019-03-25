#include <string.h>
#include <stdio.h>


int	ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 33 && str[i] <= 126)
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
	printf("ft_str_is_printable = %d\n", ft_str_is_printable(av[1]));
	return(0);
}
