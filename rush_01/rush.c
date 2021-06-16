#include <unistd.h>
#include <stdlib.h>

void	first_verification_cup(int m[4][4], int cup[4], int cdown[4]);
void	first_verification_cdown(int m[4][4], int cdown[4], int cup[4]);
void	first_verification_rl(int	m[4][4], int rl[4], int rr[4]);
void	first_verification_rr(int m[4][4], int rr[4], int rl[4]);
void	ft_verification_1(int m[4][4], int cup[4], int cdown[4]);
void	ft_verification_2(int m[4][4], int cup[4], int rl[4]);
void	ft_verification_3(int m[4][4], int cdown[4], int rl[4], int rr[4]);
void	ft_verification_4(int m[4][4], int cup[4], int cdown[4]);
void	ft_print_array(int array[4][4]);
int	ft_remove_flag(int *m_flag, int value, int flag);
void	ft_options(int matrix[4][4], int lin, int col, int size);
void	search_options(int matrix[4][4], int size);

int	count_numbers(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			count++;
		str++;
	}
	return (count);
}

int	main( int argc, char **argv[])
{
	int	i;
	int	j;

	int	m[4][4];
	//mover isto para funções
	// arumar função complete para ficar menor que 25 linhas
	// arrumar ultima função verification e trocar nome das verifications para não passar de 80 linhas
	// int cup[4]   = {4, 3, 2, 1};
    // int cdown[4] = {1, 2, 2, 2};
    // int rl[4]    = {4, 3, 2, 1};
    // int rr[4]    = {1, 2, 2, 2};

	// INICIO Argumentos

	int cup[4];
	int cdown[4];
	int rl[4];
	int rr[4];

	int x = 1;
	int y = 0;
	while ( x <= 4)
	{
		cup[y] = atoi(argv[x]);
		x++;
		y++;
	}
	
	x = 5;
	y = 0;
	while ( x <= 8)
	{
		cdown[y] = atoi(argv[x]);
		x++;
		y++;
	}
	x = 9;
	y = 0;
	while ( x <= 12)
	{
		rl[y] = atoi(argv[x]);
		x++;
		y++;
	}
	x = 13;
	y = 0;
	while ( x <= 16)
	{
		rr[y] = atoi(argv[x]);
		x++;
		y++;
	}

	// Fim argumentos
	
	j = 0;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			m[i][j] = 0;
			j++;
		}
		i++;
	}

	first_verification_cup(m, cup, cdown);
	first_verification_cdown(m, cdown, cup);
	first_verification_rl(m, rl, rr);
	first_verification_rr( m,  rr,  rl);
	ft_verification_1( m,  cup,  cdown);
	ft_verification_2( m,  cup, rl);
	ft_verification_3( m, cdown,   rl,  rr);
	ft_verification_4(m, cup, cdown);

	search_options(m, 4);
	search_options(m, 4);
	search_options(m, 4);
	search_options(m, 4);
	search_options(m, 4);
	search_options(m, 4);
	search_options(m, 4);
	
	ft_print_array(m);
}

void	ft_print_array(int array[4][4])
{
	int i;
	int j;
	int aux;
	
	i = 0;
	j = 0;
	while(i < 4)
	{
		j = 0;
		while(j < 4)
		{
			aux = array[i][j] + '0';
			write(1, &aux, 1);
			j++;
		}
		write(1,"\n", 1); 
		i++;
	}
}