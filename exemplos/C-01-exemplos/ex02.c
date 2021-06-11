#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int main(void)
{
	int banana;
	int maçã;
	int *jonas;
	int *elias;

	banana = 500;
	maçã = 8;
	jonas = &banana;
	elias = &maçã;

	printf("em tese: a=%i e b=%i\n", banana, maçã);
	ft_swap(jonas, elias);
	printf("passando pela função\n");
	printf("então: a=%i e b=%i", banana, maçã);
	printf("\n");
}
