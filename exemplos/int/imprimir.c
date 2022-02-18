#include <unistd.h>

void	ft_putstr(char *str)
{
	write(1, str, 5);
	// while (str != "")
	// {
	// 	write(1, str, 1);
	// 	str++;
	// }
}

int main()
{
	ft_putstr("askjnkjndf");
}
