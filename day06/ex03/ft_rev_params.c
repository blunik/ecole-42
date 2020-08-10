void ft_putchar(char c);

void ft_putstr(char *src)
{
	while (*src)
	{
		ft_putchar(*src);
		src++;
	}
}

int main(int argc, char **argv)
{
	int i;

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}

