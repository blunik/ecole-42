char *ft_strrev(char *str)
{
	int i;
	char k;
	int count;

	i = 0;
	count = 0;
	while (str[count])
		count++;
	while (i < count - 1)
	{
		k = str[i];
		str[i] = str[count -1];
		str[count - 1] = k;
		i++;
		count--;
	}
	return (str);
}
