int *ft_sort_integer_table(int *tab, int size)
{
	int count;
	int i;
	int temp;

	count = 0;
	while (count < size)
	{
		i = 0;
		while (i < (size - 1))
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		count++;
	}
	return (tab);
}
