int ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	res = nb;
	while (i < power)
	{
		res *= nb;
		i++;
	}
	return (res);
}
