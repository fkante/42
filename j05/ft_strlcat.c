#include <string.h>
#include <stdio.h>


int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y] && i < size)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return(i);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return(0);
	unsigned int size;

	printf("ft_strlcat = %d\n", ft_strlcat(av[1], av[2], size));
	printf("strlcat = %d\n", strlcat(av[1], av[2], size));
	return(0);
}
