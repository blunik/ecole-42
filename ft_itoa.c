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

char *ft_itoa(int nb)
{
	int i;
	long n;
	char *str;

	n = nb;
	i = ft_len(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
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
		str[i] = 48 +  n % 10;
		n = n / 10;
		i--;
	}
	return (str);

