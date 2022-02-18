#include <stdio.h>
#include <stdlib.h>

int	count(char *n)
{
	int i;
	i = 0;

	while (*n)
	{
		n++;
		i++;
	}
	return (i);
}

int power(int power)
{
	int index;
	int aux;
	int nb;

	index = 2;
	aux = 10;
	nb = 10;
	if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	while (index < power)
	{
		nb *= aux;
		index++;
	}
	return (nb);
}

int caracter_to_int(char *num)
{
	int	size;
	int	result;
	int *rev;
	int aux;

	result = 0;
	size = count(num);
	aux = size;
	rev = (int *)malloc(1*sizeof(int));
	while (*num && aux > 0)
	{
		result += (*num - 48) * (power(size));
		num++;
		size --;
		aux--;
	}
	rev = &result;
	return (*rev);
}

int	main(int argc,char *argv[])
{
	int arg;

	arg = (int *)malloc((argc -1) * sizeof(int))
	// int num;
	// int sum;
	// int div;
	// int result;

	// div = argc - 1;

	// sum = 0;
	// while (argc > 0)
	// {
	// 	num = caracter_to_int(argv[argc-1]);
	// 	sum += num;
	// 	argc--;
	// }
	
	// result = sum / div;
	// printf("%d", result);
}
