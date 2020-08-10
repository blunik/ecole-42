int ft_atoi(const char *str)
{
	int res;
	int znak;
	int i;

	i = 0;
	res = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
			|| str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
		znak = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (znak == 1)
		return (res * -1);
	return (res);
}
