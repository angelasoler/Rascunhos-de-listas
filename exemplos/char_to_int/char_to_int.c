#include <unistd.h>

void char_to_int(int n)
{
	char c;
	if (n < 10)
	{
		c = n + 48;
		write(1, &c, 1);
	}
	else
	{
		char_to_int(n/10);
		char_to_int(n%10);
	}
}

int main()
{
	char_to_int(123);
}
