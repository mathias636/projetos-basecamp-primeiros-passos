/*
fazer uma função que imprima um retângulo independentemente dos valores de x e y
atribuir valores de x e y >>> retângulo
x = número de character (horizontal)
y = número de linhas (vertical)
o primeiro character será um "o"
o restante será "-"
uma variável interativa chamada numchar para controlar o loop;
no meu entendimento ela servirá como um contador de caracteres por linha, pois a
partir do momento que x e y forem definidos eles serão "constatnes", por assim dizer

o-------o
|       |
|       |
|       |
o-------o

Então, a minha lógica inicial foi:

set numchar = 0
while numchar < x
{
	if (y < 2)
	if (numchar = 0 or = x)
	{
		print "o"
	}
}

 
*/

#include <unistd.h> 
void rush(int x, int y);

int	main(void)
{
	rush(5 , 5);
	return 0;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rush(int x, int y)
{

}