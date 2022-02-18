#include <stdio.h>
#include <unistd.h>

// void f_array(char *pr_p)
// char *f_array(void)
// {
// 	char a = 'a';
// 	char b = 'b';

// 	char *pr_p = a + b;
// 	return(pr_p);
// }

int count(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main()
{
	char *c;
	char *recive;
	int i;
	int index;

	c = "angela";
	i = count(c);
	index = 0;

	while (index <= i)
	{
		
		write(1, &c[index], 1);
		index++;
	}
}
