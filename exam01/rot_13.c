#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	char mvup;
	char mvdwn;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			mvup = argv[1][i] + 13;
			mvdwn = argv[1][i] - 13;
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'M') ||
					(argv[1][i] >= 'a' && argv[1][i] <= 'm'))
				write(1, &mvup, 1);
			else if ((argv[1][i] >= 'N' && argv[1][i] <= 'Z') ||
					(argv[1][i] >= 'n' && argv[1][i] <= 'z'))
				write(1, &mvdwn, 1);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
