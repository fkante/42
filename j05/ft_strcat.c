#include <string.h>
#include <stdio.h>


char	*ft_strcat(char *dest, char *src)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (dest[i])
		i++;
	while (src[y])
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
	printf("ft_strcat = %s\n", ft_strcat(av[1], av[2]));
	printf("strcat = %s\n", strcat(av[1], av[2]));
	return(0);
}
