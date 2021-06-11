#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}


int main(void)
{
	int a;
	int b;
	int result;
	int mod;
	int *jones;
	int *hebert;
// aqui eu tive que criar uma variável para o a, pro b, pro resultado e pro resto;
//daí então eu somente enviei para ft_div_mod os ponteiros destas variáveis;
	a = 20;
	b = 10;
	result = 0;
	mod = 0;
	//
	jones = &result;
	hebert = &mod;

	printf("em tese a=%i e b=%i\n", a, b);
	ft_div_mod(a, b, jones, hebert);
	printf("então a / b = %i\n", result);
	printf("e mod de a & b = %i\n", mod);
}


/*
int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(10, 2, &div, &mod);
	printf("div=%d mod=%d \n", div, mod);
}
*/