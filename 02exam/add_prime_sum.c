#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int znak;
	int res;

	res = 0;
	i = 0;
	znak = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] =='\f'
			|| str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			znak = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * znak);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	unsigned int n;
	
	n = nb;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int ft_isprime(int n)
{
	int i;

	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	i = 3;
	while (i * i <= n)
	{
		if (n % i == 0)
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
			if (ft_isprime(nb))
				sum += nb;
			nb--;
		}
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}



