#include <stdio.h>

int *reverse_int_array(int *array, int size)
{
	int index;
	int aux;

	index = 0;
	while (index < size / 2)
	{
		aux = array[index];
		aaray[index] = array[size - 1 - index];
		array[index - 1 - index ] = aux;
		index++;
	}
	return (array);
}

int	main()
{
	
}

int	strslen(char **strs)
{
	int size;

	size = 0;
	str = strs[size];
	c = str[0];
	while (strs[size][0] != '\0')
	 size++;
	return (size);
}