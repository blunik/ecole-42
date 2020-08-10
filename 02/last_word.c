#include <unistd.h>

int ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
			i++;
		i = i - 1;
		while (ft_isblank(argv[1][i]))
			i--;
		while(argv[1][i] && !ft_isblank(argv[1][i]))
			i--;
		i = i + 1;
		while(!ft_isblank(argv[1][i]) && argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
