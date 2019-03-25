#include <string.h>
#include <stdio.h>


char    *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' & str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z' 
				&& str[i - 1] >= 0 && str[i - 1] <= 47)
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return(str);
}

int     main(int ac, char **av)
{
	if (ac != 2)
		return(0);
	printf("ft_strcapitalize = %s\n", ft_strcapitalize(av[1]));
	return(0);
}
