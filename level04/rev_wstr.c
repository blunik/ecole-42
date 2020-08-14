#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int is_tab(char c)
{
	return (c == '\t' || c == ' ');
}

void print_reverse(char *str)
{
	int first;
	int end;
	int curr;

