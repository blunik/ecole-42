#include <stdlib.h>

char *ft_concat_params(int argc, char **argv)
{
	char *arr;
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	arr = malloc((argc) * sizeof(char));
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			arr[k] = argv[i][j];
			k++;
			j++;
		}
		if ((i + 1) < argc)
			arr[k] = '\n';
		k++;
		i++;
	}
	arr[k - 1] = '\0';
	return (arr);
}
