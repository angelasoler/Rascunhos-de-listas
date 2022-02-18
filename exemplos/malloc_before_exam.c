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

int caracter_to_int(char *num)
{
	int	size;
	int	result;

	result = 0;
	size = count(num);
	while (*num && size > 0)
	{
		result += (*num - 48) * (10^size);
		num++;
		size --;
	}
	return (result);
}

int	main(int argc,char *argv[])
{
	int num;
	int sum;
	int div;

	div = argc;

	sum = 0;
	while (argc > 0)
	{
		num = caracter_to_int(argv[argc]);
		sum += num;
		argc--;
	}
	printf("%d", (sum / div));
}