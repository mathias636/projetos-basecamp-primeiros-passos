#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}

int main(void)
{
	int a;
	int b;
	int *robert;
	int *hebert;

	a = 14;
	b = 2;
	robert = &a;
	hebert = &b;

	printf("então a = %i e b = %i\n", a, b);
	ft_ultimate_div_mod(robert, hebert);
	printf("a / b = %i\n", a);
	printf("a mod b = %i\n", b);
}
