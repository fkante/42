#include <string.h>
#include <stdio.h>


char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return(str);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return(0);
	printf("ft_strlowcase = %s\n", ft_strlowcase(av[1]));
	return(0);
}

