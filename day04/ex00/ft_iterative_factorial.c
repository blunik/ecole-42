int ft_iterative_factorial(int nb)
{
	int i;
	int res;

	if (nb < 0 || nb > 12)
		return (0);
	i = 2;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		++i;
	}
	return (res);
}
