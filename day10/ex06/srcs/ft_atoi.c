int ft_atoi(char *str)
{
	int num;
	int znak;
	int i;

	i = 0;
	num = 0;
	znak = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f' || str[i] == '\v' || str[i] == '\r' || str[i] == '\t')
		i++;
	if (str[i] == '-')
		znak = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	if (znak != 0)
		return (num * -1);
	return (num);
}

