#include <unistd.h>

int main(void)
{
	int i;
	char one;
	char two;

	one = 'a';
	two = 'B';
	i = 0;
	while (i < 13)
	{
		write(1, &one, 1);
		write(1, &two, 1);
		one += 2;
		two += 2;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
