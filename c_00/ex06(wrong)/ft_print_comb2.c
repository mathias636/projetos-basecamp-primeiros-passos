#include <unistd.h>

void	print(int A, int B, int C, int D)
{
	write(1, &A, 1);
	write(1, &B, 1);
	write(1, " ", 1);
	write(1, &C, 1);
	write(1, &D, 1);
	if (A < '9' && B < '9')
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int m;
	int c;
	int d;
	int u;

	m = '0';
	c = '0';
	d = '0';
	u = '1';
	while(m <= '9')
	{
		while(c <= '9')
		{
			while(d <= '9')
			{
				while(u <= '9')
				{
					print(m, c, d, u);
					u++;
				}
				d++;
				u = '0';
				write(1, "\n", 1);
			}
			c++;
			d = '0';
			u++;
		}
		m++;
		c = '0';
		d++;
	}
}
//marque como errado
