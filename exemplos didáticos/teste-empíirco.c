#include <unistd.h>
#include <stdio.h>

/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
	write (1, "\n", 1);
}
*/

void	ft_ft(int *nbr)
{
	*nbr = 42; //atualiza
	printf("&nbr:%p\n", nbr);
	printf("*nbr:%d\n", *nbr);
}

int main(void)
{
	int number;
	int *adress;

	number = 4;
	adress = &number;
	printf("number original %d\n", number);
	ft_ft(adress);
	//ft_putchar(*adress);
	printf("number foi alterado %d\n", number);
	return 0;
}
/*
	adress = &number;
	*adress = o valor;
	&adress = endereço de adress;

