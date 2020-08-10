int ft_sqrt(int nb)
{
	int k;

	if (nb < 0)
		return (0);
	k = 1;
	while (k * k < nb)
		k++;
	if (k * k == nb)
		return (k);
	return (0);
}
