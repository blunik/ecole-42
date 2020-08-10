int max(int *tab, unsigned int len)
{
	int max;
	
	if (!tab)
		return (0);
	max = tab[--len];
	while(len--)
	{
		if (tab[len] > max)
			max = tab[len];
	}
	return (max);
}
