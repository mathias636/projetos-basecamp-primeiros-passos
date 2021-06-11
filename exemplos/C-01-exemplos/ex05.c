#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i])//enquanto o caracter for válido e não \0
	{
        write(1, str, 1);
		i++;
	}
}

int	main(void)
{
	char	name[6] = "querty"
	// name[6] = "querty";
	ft_putstr(name);
	return (0);
}
