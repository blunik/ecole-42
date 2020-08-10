char *ft_strrev(char *str)
{
	int i;
	int count;
	char k;

	count = 0;
	i = 0;
	while(str[count])
		count++;
	while (i < count - 1)
	{
		k = str[i];
		str[i] = str[count - 1];
		str[count - 1] = k;
		count--;
		i++;
	}
	return (str);
}
