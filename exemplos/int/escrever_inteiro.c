#include <unistd.h>
#include <stdio.h>

void	ft_putint(char *n)
{
	// printf("%ls", n);
	write(1, n, 1);
}

int	main()
{
	char f;
	char *x;

	f = 42;
	x = &f;
	ft_putint(x);
}
