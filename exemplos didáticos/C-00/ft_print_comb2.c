#include <unistd.h>
void	print(int A, int B, int C, int D)
{
	write(1, &A, 1);
	write(1, &B, 1);
	write(1, " ", 1);
	write(1, &C, 1);
	write(1, &D, 1);
	if (A != '9' && B != '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while(a <= '9')//
	{
		while(b <= '9')//
		{
			while(c <= '9')
			{
				while(d <= '9')
				{
					print(a, b, c, d);
					d++;
				}
				c++;
				d = 0;
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}

// tire esta joça!!!!!!!