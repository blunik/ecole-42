int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	if (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}
