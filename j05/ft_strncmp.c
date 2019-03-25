#include <string.h>
#include <stdio.h>


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return(s1[i] - s2[i]);
		i++;
	}
	return(0);
}

int	main(int ac, char **av)
{
	unsigned int n;

	n = 4;
	if (ac != 3)
		return(0);
	printf("ft_strncmp = %d\n", ft_strncmp(av[1], av[2], n));
	printf("strncmp = %d\n", strncmp(av[1], av[2], n));
	return(0);
}

