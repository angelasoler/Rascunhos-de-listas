#include <unistd.h>
#include <stdio.h>

void	ft_putint(int *n)
{
	// int	aux;
	char	sw;
	// aux = *n;
	sw = *n + '0';
	// printf("%d", aux);
	write(1, &sw, 1);
	// write(1, &(*n), 1);
}

int	main()
{
	int f;
	int *x;

	f = 42;
	x = &f;
	ft_putint(x);
}