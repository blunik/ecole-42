#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *ranhe;
	int i;

	if (start > end)
		range = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		range = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		range[i++] = end;
		if (start > end)
			end++;
		else
			end--;
	}
	range[i] = end;
	return (range);
}
