#include <stdlib.h>

char *ft_strdup(char *src)
{
	int k;
	char *str;

	k = 0;
	str = malloc(sizeof(*src));
	if (str == NULL)
		return (NULL);
	while (src[k] != '\0')
	{
		str[k] = src[k];
		k++;
	}
	str[k] = '\0';
	return (str);
}
