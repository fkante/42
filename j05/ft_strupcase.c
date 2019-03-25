#include <string.h>
#include <stdio.h>


char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return(str);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return(0);
	printf("ft_strupcase = %s\n", ft_strupcase(av[1]));
	return(0);
}

