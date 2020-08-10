#include <stdlib.h>
#include <unistd.h>
int go_to_matching(char *operations, int curr)
{
	int balance;

	balance = 0;
	if (operations[curr] == '[')
	{
		curr++;
		while (!(operations[curr] == ']' && balance == 0))
		{
			if (operations[curr] == '[')
				balance++;
			else if (operations[curr] == ']')
				balance--;
			curr++;
		}
		curr--;
	}
	else if (operations[curr] == ']')
	{
		curr--;
		while (!(operations[curr] == '[' && balance == 0))
		{
			if (operations[curr] == ']')
				balance++;
			else if (operations[curr] == '[')
				balance--;
			curr--;
		}
		curr--;
	}
	return (curr);
}
void fuck_brain(char *operations)
{
	int curr;
	int pointer;
	char bytes[2048];

	curr = 0;
	pointer = 0;
	while (curr < 2048)
		bytes[curr++] = 0;
	curr = 0;
	while (operations[curr])
	{
		if (operations[curr] == '>')
			pointer++;
		else if (operations[curr] == '<')
			pointer--;
		else if (operations[curr] == '+')
			bytes[pointer]++;
		else if (operations[curr] == '-')
			bytes[pointer]--;
		else if (operations[curr] == '.')
			write(1, &bytes[pointer], 1);
		else if (operations[curr] == '[')
		{
			if (bytes[pointer] == 0)
				curr = go_to_matching(operations, curr);
		}
		else if (operations[curr] == ']')
		{
			if (bytes[pointer] != 0)
				curr = go_to_matching(operations, curr);
		}
		curr++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 2)
		fuck_brain(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}

