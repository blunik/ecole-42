char *ft_strrev(char *str)
{
	int count;
	int i;
	char k;

	count = 0;
	while(str[count] != '\0')
		count++;
	i = 0;
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
