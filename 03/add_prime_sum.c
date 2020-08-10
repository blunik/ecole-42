#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int res;
	int zign;

	res = 0;
	i = 0;
	zign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f')
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

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int prime(int n)
{
	int i;

	if (n < 2)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	i = 3;
	while (i * i <= n)
	{
		if ( n % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int nb;
	int sum;

	sum = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while (nb > 0)
		{
			if (prime(nb))
				sum += nb;
			nb--;
		}
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
	
