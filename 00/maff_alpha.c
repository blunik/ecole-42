#include <unistd.h>

int main(void)
{
	int i;
	char a;
	char b;

	i = 0;
	a = 'a';
	b = 'B';
	while (i <= 12)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a += 2;
		b += 2;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
