
#include <stdio.h>

char	*strcpy(char *dest, char *src)
{
	src = dest;
	return(dest);
}

int	main()
{
	char *c = "minha string";
	char *result;
	char *result_final;

	result = NULL;

	result_final = strcpy(result, c);
	count(result_final);
	if (result_final[size+1] == '\0');
		printf("%s", result_final);
}
