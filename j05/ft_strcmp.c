#include <string.h>
#include <stdio.h>


int	ft_strcmp(char *s1, char *s2)
{
	int i;
	int y;
	
	i = 0;
	y = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return(0);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return(0);
	printf("ft_strcmp = %d\n", ft_strcmp(av[1], av[2]));
	printf("strcmp = %d\n", strcmp(av[1], av[2]));
	return(0);
}

