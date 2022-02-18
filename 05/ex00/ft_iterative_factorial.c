int ft_iterative_factorial(int nb)
{
	int aux;
	int n;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	n = nb;
	while (n >= 2)
	{
		aux = n;
		nb *= (aux - 1);
		n--;
	}
	return (nb);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_iterative_factorial(3));
}
