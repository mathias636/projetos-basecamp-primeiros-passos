#include <stdio.h>
#include <string.h>

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
	char	dest[] = "";
	// int		result;

	printf("O vetor era assim: %s\n", vetor);
	printf("O dest era assim: %s\n", dest);
	// result = 
	ft_strcpy(dest, vetor);
	printf("O vetor FICOU assim: %s\n", vetor);
	printf("O dest FICOU assim: %s\n", dest);
	return (0);
}
