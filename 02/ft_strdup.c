#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *str;
	int i;

	i = 0;
	str = malloc(sizeof(*src));
	if (str == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
