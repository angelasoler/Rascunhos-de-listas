#include <stdio.h>

void	funcao_bonita(int *aponta_a_var)
{
	*aponta_a_var = 42;
}

int	main()
{
	int n;
	int *x;
	n = 5;
	x = &n;

	printf("minha variavel é %d antes de passar pela função bonita\n", n);
	funcao_bonita(x);
	printf("mas ela se converteu em %d despois de passar na minha funçaõ bonita \n", n);
}

// voi	funcao_bonita(int *aponta_a_var)
// {
// 	int **y = aponta_a_var;

// 	return(y/8)
// }

// int	main()
// {
// 	int *x;
// 	int n;
// 	n = 5;
// 	x = &n;

// 	funcao_bonita(&x)
// }