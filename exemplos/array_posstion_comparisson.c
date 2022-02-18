#include <stdio.h>

char	array_position_comparisson(char *str)
{
	int	result;
	int	i;

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = 1;
	}
}

int	main()
{
	char c[1] = "a"
	int r ;
	r = array_position_comparisson(c)
	printf(%d)
}