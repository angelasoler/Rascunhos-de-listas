int ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (nb == 0)
		return (0);
	else if (power == 1)
		return (nb);
	else
	{
		while (power <= 2)
			return (nb * ft_recursive_power(nb, power - 1));
	}
}

#include <stdio.h>
int	main()
{
	printf("32 = %d\n", ft_recursive_power(2, 5));
	printf("0 = %d\n", ft_recursive_power(0, 5));
	printf("1 = %d\n", ft_recursive_power(0, 0));
	printf("1 = %d\n", ft_recursive_power(2, 0));
	printf("25 = %d\n", ft_recursive_power(5, 2));
	printf("10000000000 = **resultado indefinido**%d\n", ft_recursive_power(10, 10));
}