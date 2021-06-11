#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	vetor[6] = {'q', 'w', 'e', 'r', 't', 'y'};
	int		result;
	result = *ft_strcpy(vetor);
	printf("%d\n", result);
	return (0);
}
