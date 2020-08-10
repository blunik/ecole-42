#include <unistd.h>

int repeat_count(char s)
{
	int repeat;

	if (s >= 'A' && s <= 'Z')
		repeat = s - 'A' + 1;
	else if (s >= 'a' && s <= 'z')
		repeat = s - 'a' + 1;
	else
		repeat = 1;
	return (repeat);
}

int main(int argc, char **argv)
{
	int repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = repeat_count(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
