#include <unistd.h>

void print_bits(unsigned char octet)
{
	int i;
	unsigned char bit;

	i = 8;
	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}
int main(void)
{
	int n = 150;
	print_bits(n);
	return (0);
}
