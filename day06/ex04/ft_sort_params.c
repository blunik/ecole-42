void ft_putchar(char c);

int ft_strcmp(char *s1, char *s2)
{
	unsigned int k;

	k = 0;
	while (s1[k] != '\0' && s2[k] != '\0')
	{
		if (s1[k] != s2[k])
			return (s1[k] - s2[k]);
		k++;
	}
	if ((s1[k] == '\0' && s2[k] != '\0') || (s1[k] != '\0' && s2[k] == '\0'))
		return (s1[k] - s2[k]);
	return (0);
}

void print_arr(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int main(int argc, char *argv[])
{
	int k;
	char *tmp;

	k = 0;
	while (k++ < (argc - 1))
	{
		if (k + 1 < argc && ft_strcmp(argv[k + 1], argv[k]) < 0)
		{
			tmp = argv[k];
			argv[k] = argv[k + 1];
			argv[k + 1] = tmp;
			k = 0;
		}
	}
	print_arr(argc, argv);
	return (0);
}
