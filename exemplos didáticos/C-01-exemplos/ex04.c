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
	int *julius;

	a = 14;
	b = 2;
	robert = &a;
	julius = &b;

	printf("então a = %i e b = %i\n", a, b);
	ft_ultimate_div_mod(&robert, &julius);
	printf("a / b = %i\n", a);
	printf("a mod b = %i\n", b);
}
