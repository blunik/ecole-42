#include <unistd.h>

int isposible(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f')
		return (1);
	return (0);
}
int main(int argc, char **argv)
{
	int i;
	
	i = 0;
	if (argc == 2)
	{
		while (isposible(argv[1][i]))
			i++;
		while (!(isposible(argv[1][i])) && argv[1][i])
			write(1, &argv[1][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
