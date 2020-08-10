void ft_putchar(char c);

void ft_print_program_name(char *src)
{
	int k;

	k = 0;
	while (src[k] != '\0')
	{
		ft_putchar(src[k]);
		k++;
	}
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	(void)argc;
	ft_print_program_name(argv[0]);
	return (0);
}

