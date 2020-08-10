#include <stdlib.h>
#include <stdio.h>
int ft_len(long n, int base)
{
	int len;

	len = 0;
	if (n < 0 && base == 10)
	{
		len++;
		n = n * -1;
	}
	else if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		len++;
		n = n / base;
	}
	return (len);
}

char *ft_itoa_base(int n, int base)
{
	char *str;
	char *tab;
	int i;
	int o;
	long nb;

	tab = "0123456789ABCDEF";
	nb = n;
	i = ft_len(nb, base);
	str = (char *)malloc(sizeof(char) * (i + 1));
	str[i--] = '\0';
	if (nb == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0 && base == 10)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	else if (nb < 0)
		nb = nb * -1;
	while (nb > 0)
	{
		o = nb % base;
		str[i] = tab[o];
		i--;
		nb = nb / base;
	}
	return (str);
}

int main(void)
{
	printf("%s\n", ft_itoa_base(170, 16));
	return (0);
}
