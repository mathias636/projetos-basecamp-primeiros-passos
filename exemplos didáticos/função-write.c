#include <unistd.h>

void	repeat(int timesone, int timestwo, int timesthree, int timesfour, int timesfive);

void	ft_putchar(char block)
{
	write (1, &block, 1);
}

void	p_lines(char UM, char DOIS, char TRES, char ponto, int x)
{
	while(x-- > 0)
	{
		ft_putchar(UM);//primeira coluna  início
		ft_putchar(DOIS);//coluna do meio |
		ft_putchar(TRES);//coluna do fim  |
		ft_putchar(ponto);//			  fim
	}
	ft_putchar('\n');
}

void	repeat(int timesone, int timestwo, int timesthree, int timesfour, int timesfive)
{
	p_lines('B', 'O', 'A', '!', timesone);//primeira linha
	p_lines('O', 'B', 'A', '!', timestwo);
	p_lines('L', 'O', 'L', '!', timesthree);
	p_lines('A', 'T', 'O', '!', timesfour);
	p_lines('T', 'O', 'A', '!', timesfive);
}

int main(void)
{
	repeat(10, 20, 30, 60, );
	return (0);              
}
