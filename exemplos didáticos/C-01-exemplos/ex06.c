#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')//enquanto o caracter for válido e não \0
	{
		i++;
	}
	return (i);// agora é só colocar alguém pra receber o valor da função
}
// a função está com o nome errado

int	main(void)
{
	// char	*texto = "querty";
	char	texto[6] = "qwerty"; // assim também dá, mas o [6] vem de 5 char + \0 (o final);
	// texto[6] = "querty";
	ft_putstr(texto);
	return (0);
}
