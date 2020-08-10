#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int k;

	i = 0;
	k = 0;
	if (argc == 3)
	{
		while (argv[1][i] && argv[2][k])
		{
			if (argv[1][i] == argv[2][k])
				i++;
			k++;
		}
		if (argv[1][i] == '\0')
		{
			i = 0;
			while (argv[1][i])
				write(1, &argv[1][i++], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
