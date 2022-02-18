#include <unistd.h>

void	minha_funcao_q_escreve_coisas(void)
{
	write(1, "escrevendo coisas\n", 18);
}

int	main()
{
	minha_funcao_q_escreve_coisas();
	return 0;
}
