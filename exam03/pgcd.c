#include <stdlib.h>
#include <stdio.h>

int pgcd(int nb1, int nb2)
{
	int i;

	i = nb1;
	while (i > 0)
	{
		if (nb1 % i == 0 && nb2 % i == 0)
			return (i);
		i--;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int num1;
	int num2;

	if (argc == 3)
	{
		if ((num1 = atoi(argv[1])) > 0 && (num2 = atoi(argv[2])) > 0)
		       printf("%d", pgcd(num1, num2));
	}
	printf("\n");
	return (0);
}


