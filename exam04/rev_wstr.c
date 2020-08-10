#include <unistd.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int is_tab(char c)
{
	return (c == ' ' || c == '\t');
}

void print_reverse(char *str)
{
	int first;
	int end;
	int curr;

	first = ft_strlen(str) - 1;
	while (first >= 0)
	{
		end = first;
		while (first >= 0 && !is_tab(str[first]))
			first--;
		curr = first + 1;
		while (curr <= end)
			write(1, &str[curr++], 1);
		if (first > 0)
			write(1, " ", 1);
		first--;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_reverse(argv[1]);
	write(1, "\n", 1);
	return (0);
}
