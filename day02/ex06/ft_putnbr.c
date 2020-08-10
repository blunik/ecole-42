void ft_putchar(char c);

void ft_putnbr(int nb)
{
	unsigned int num;

	if (nb < 0)
	{
		ft_putchar('-');
		num = nb * -1;
	}
	else
		num = nb;
	if (num >= 10)
		ft_putnbr(num / 10);
	ft_putchar(num %  10 + 48);
}
