#include <stdlib.h>
#include <stddio.h>
char *teste_malloc(char *contr)
{
	char *str = malloc(6*sizeof(char));
	str = "Malloc";
	printf("%p\n", contr);
	printf("%p\n", str);
	return (str);

}

int	main()
{
	char contr[6];
	char *s;
	printf("%p\n", contr);

	s = teste_malloca(contr);
	printf("%p", s)
}
