#include <unistd.h>

int is_tab(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int flg;

	i = 0;
	flg = 0;
	if (argc == 2)
	{
		while (argv[1][i] && is_tab(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (is_tab(argv[1][i]))
					flg = 1;
			if (argv[1][i] && !is_tab(argv[1][i]))
			{
				if (flg)
				{
					write(1, " ", 1);
					flg = 0;
				}
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

