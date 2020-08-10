int inbase(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10))
			|| (c >= 'a' && c <= ('a' + base - 10)));
}

int ft_atoi_base(const char *str, int str_base)
{
	int i;
	int zign;
	int res;

	if (!str[0] && (str_base < 2 || str_base > 16))
		return (0);
	res = 0;
	i = 0;
	zign = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || str[i] == '\r'
			|| str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i] == '-')
			zign = -1;
	while (str[i] && inbase(str[i], str_base))
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			res = (res * str_base) + (str[i++] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			res = (res * str_base) + (str[i++] - 'a' + 10);
		else
			res = (res * str_base) + (str[i++] - '0');
	}
	return (res * sign);
}
