#include <unistd.h>

int inter(char *str, char c, int len)
{
	int i;

	i = 0;
	while(str[i] && (i < len || len == -1))
		if (str[i++] == c)
			return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!inter(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!inter(argv[2], argv[2][i], i) && !inter(argv[1], argv[2][i], -1))
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
