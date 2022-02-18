#include <stdio.h>
#include <unistd.h>

int	count(char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

// está printando 2 vezes
char *exam01(char *str)
{

	int size = count(str);

	while (size >= 0)
	{
		write(1, &str[size], 1);
		size--;
	}
	return(str);
}

int	main()
{
	char *result;
	char ar[7] = "angela";
	char num[7] = "0123";
	result = exam01(ar);
	
	exam01(ar);
	printf("\n%s\n", result);

	exam01(num);
	result = exam01(num);
	printf("\n%s\n", result);
}
