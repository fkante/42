#include <string.h>
#include <stdio.h>


char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (dest[y])
		y++;
	while (src[i])
		i++;
	if (i > y)
		return(0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return(0);
	printf("ft_strcpy = %s\n", ft_strcpy(av[1], av[2]));
	printf("strcpy = %s\n", strcpy(av[1], av[2]));
	return(0);
}
