#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int znak;
	int res;

	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		znak = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (znak == 1)
		return (res * -1);
	return (res);
}

void print_hex(int c)
{
	char *str;
	str = "0123456789abcdef";
	if (c >= 16)
        print_hex(c / 16);
    write(1, &str[c % 16), 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
