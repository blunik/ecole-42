#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *res;

	i = 0;
	res = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}

