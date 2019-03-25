#include <string.h>
#include <stdio.h>


char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int y;

	i = 1;
	y = 1;
	while (str[i])
	{
		if (str[i] == to_find[y])
			y++;
		if (to_find[y] =='\0')
			return(to_find);
		i++;
	}
	return(0);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return(0);
	printf("ft_strstr = %s\n", ft_strstr(av[1], av[2]));
	printf("strstr = %s\n", strstr(av[1], av[2]));
	return(0);
}
