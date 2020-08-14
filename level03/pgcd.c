#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int num1;
	int num2;
	int n;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		n = num1;
		while (n > 0)
		{
			if (num1 % n == 0 && num2 % n == 0)
				break;
			n--;
		}
	    printf("%d", n);
	}
	printf("\n");
	return (0);
}



