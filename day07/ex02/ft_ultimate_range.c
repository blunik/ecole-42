#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int *arr;
	int k;

	k = 0;
	if (min >= max)
		return (0);
	arr = (int*)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (0);
	while (max > min)
	{
		arr[k] = min;
		min++;
		k++;
	}
	*range = arr;
	return (k);
}
