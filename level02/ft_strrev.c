char *ft_strrev(char *str)
{
	int i;
	int count;
	char k;

	count = 0;
	i = -1;
	while (str[count])
		count++;
	while (++i < --count)
	{
		k = str[i];
		str[i] = str[count;
		str[count ] = k;
	}
	return (str);
}
