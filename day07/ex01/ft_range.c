#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *arr;
	int i;

	i = 0;
	if (min >= max)
		return (0);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (0);
	while (max > min)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
