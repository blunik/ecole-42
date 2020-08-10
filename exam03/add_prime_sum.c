#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int znak;
	int res;

	res = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		znak = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (znak == 1)
		return (res * -1);
	return (res);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	unsigned int num;

	if (nb < 0)
	{
		write(1, "-", 1);
		num = nb * -1;
	}
	else
		num = nb;
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar(num % 10 + 48);
}

int ft_is_prime(int nb)
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

int main(int argc, char **argv)
{
	int nb;
	int sum;

	sum = 0;
	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		while ( nb > 0)
		{
			if (ft_is_prime(nb))
				sum += nb;
			nb--;
		}
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}

