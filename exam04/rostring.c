#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int k;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == '\t' || argv[1][i] == ' ')
			i++;
		k = i;
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] && (argv[1][i] != '\t' && argv[1][i] != ' ')
					&& (argv[1][i-1] == '\t' ||  argv[1][i-1] == ' '))
			{
				while (argv[1][i] && argv[1][i] != '\t' && argv[1][i] != ' ')
					write(1, &argv[1][i++], 1);
				write(1, " ", 1);
			}
			i++;
		}
		while (argv[1][k] && argv[1][k] != '\t' && argv[1][k] != ' ')
			write(1, &argv[1][k++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
