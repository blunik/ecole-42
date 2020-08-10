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
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
