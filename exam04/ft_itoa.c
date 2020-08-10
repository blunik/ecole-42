#include <stdlib.h>

int ft_len(long nb)
{
	int len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char *ft_itoa(int nbr)
{
	char *str;
	long n;
	int i;

	n = nbr;
	i = ft_strlen(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (str);
}

