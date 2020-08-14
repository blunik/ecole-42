#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int res;
	int zign;

	i = 0;
	res = 0;
	zign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' || str[i] == '\f'
			|| str[i] == '\n' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			zign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * zign);
}

int is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	unsigned int n;

	if (nbr < 0)
	{
		ft_putchar('-');
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int main(int argc, char **argv)
{
	int i;
	int sum;
	int nb;

	i = 0;
	sum = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while (nb > 1)
		{
			if (is_prime(nb))
				sum += nb;
			nb--;
		}
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}


