#include <unistd.h>

void	ft_print_char(char c, char d, char u)
{
	write (1, &c, 1);
	write (1, &d, 1);
	write (1, &u, 1);
	if (c < '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_while(char c, char d, char u)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			while (u <= '9')
			{
				ft_print_char(c, d, u);
				u++;
			}
			d++;
			u = (d + 1);
		}
		c++;
		d = (c + 1);
		u = (d + 1);
	}
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	ft_while(c, d, u);
}
