#include <string.h>
#include <stdio.h>


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return(dest);
}

int	main(int ac, char **av)
{
	unsigned int n;

	n = 4;
	if (ac != 3)
		return(0);
	printf("strncpy = %s\n", strncpy(av[1], av[2], n));
	printf("ft_strncpy = %s\n", ft_strncpy(av[1], av[2], n));
	return(0);
}
