void	print_bits(unsigned char octet)
{
	int i;
	unsigned char bit;

	i = 9;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}
