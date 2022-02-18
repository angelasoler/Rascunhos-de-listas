int ft_iterative_power(int nb, int power)
{
	int index;
	int aux;

	index = 2;
	aux = nb;
	if (power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	else if (power == 1)
		return (nb);
	while (index <= power)
	{
		nb *= aux;
		index++;
	}
	return (nb);
}

#include <stdio.h>
int	main()
{
	printf("32 = %d\n", ft_iterative_power(2, 5));
	printf("0 = %d\n", ft_iterative_power(0, 5));
	printf("1 = %d\n", ft_iterative_power(0, 0));
	printf("1 = %d\n", ft_iterative_power(2, 0));
	printf("25 = %d\n", ft_iterative_power(5, 2));
	printf("10000000000 = **resultado indefinido**%d\n", ft_iterative_power(10, 10));
}