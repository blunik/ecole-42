#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	char letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			letter = argv[1][i];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				letter = 'A' - argv[1][i] + 'Z';
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				letter = 'a' - argv[1][i] + 'z';
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

