#include <unistd.h>
#include <stdio.h>

int ft_ultimate(int ********nbr)
{
	********nbr = 42;
}

int	main(void)
{
	int root;
	int *robson;
	int ** cleison;
	int *** joe;
	int ****patrick;
	int *****chris;
	int ******jacob;
	int *******malaquias;
	int ********raimunda;

	root = 4;
	robson = &root;
	cleison = &robson;
	joe = &cleison;
	patrick = &joe;
	chris = &patrick;
	jacob = &chris;
	malaquias = &jacob;
	raimunda = &malaquias;
	
	printf("este é o número antes de ir para ft_ultimate: %i\n", root);
	ft_ultimate(raimunda);
	printf("este é o número depois de passar pela ft_ultimate%i\n", root);

	return(0);
}
