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
	while (*num && aux != 0)
	{
		result += (*num - 48) * (power(size));
		num++;
		size --;
		aux--;
	}
	rev = &result;
	return (*rev);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", (caracter_to_int("1500")));
}
