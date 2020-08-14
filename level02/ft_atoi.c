
int	ft_atoi(char *str)
{
	int i;
	int res;
	int zign;

	i = 0;
	res = 0;
	zign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' ||str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\n')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			zign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * znak);
}
