#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int zign;
	int res;

	i = 0;
	zign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			zign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * zign);
}

void print_hex(int n)
{
	char *str;

	str = "0123456789abcdef";
	if (n >= 16)
		print_hex(n / 16);
	write(1, &str[n % 16], 1);
}

int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}

