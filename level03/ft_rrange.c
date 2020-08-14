#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *tab;

	if (start > end)
		tab = (int *)malloc(sizeof(int) * (start - end) + 1);
	else
		tab = (int *)malloc(sizeof(int) * (end - start) + 1);
	i = 0;
	while (start != end)
	{
		tab[i] = end;
		if (start > end)
			end++;
		else
			end--;
		i++;
	}
	tab[i] = end;
	return (range);
}
