
int nbr_inbase(char c, int base)
{
	if (base <= 10)
		return (c >= '0' && c <= '9');
	return ((c >= '0' && c<= '9') || (c >= 'A' && c <= ('A' + base - 10))
			|| (c >= 'a' && c <= ('a' + base - 10)));
}

int ft_atoi_base(char *str, int base)
{
	int i;
	int res;
	int zign;

	if (!str[0] || base < 2 || base > 16)
		return (0);
	res = 0;
	zign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\f' || str[i] =='\t'
			|| str[i] == '\r' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			zign = -1;
	while (str[i] && nbr_inbase(str[i], base))
	{
		if (str[i] >= 'A' && str[i] <= 'F')
			res = (res * base) + (str[i] - 'A' + 10);
		else if (str[i] >= 'a' && str[i] <= 'f')
			res = (res * base) + (str[i] - 'a' + 10);
		else
			res = (res * base) + str[i] - '0';
		i++;
	}
	return (res * zign);
}

