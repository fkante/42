#include <string.h>
#include <stdio.h>


char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y] && y < nb)
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return(0);
	int nb;

	nb = 3;
	printf("ft_strncat = %s\n", ft_strncat(av[1], av[2], nb));
	printf("strncat = %s\n", strncat(av[1], av[2], nb));
	return(0);
}
