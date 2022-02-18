#include <unistd.h>

// char --> caracter 1 48 --> '0', 5->int
void	minha_funcao_q_escreve_coisas(char a)
{
	write(1, &a, 1);
	// 0xjf45g15a
}

int	main(void)
{

	minha_funcao_q_escreve_coisas('m');
}