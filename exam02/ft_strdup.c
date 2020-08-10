#include <unistd.h>

char *ft_strdup(char *src)
{
	int i;
	char *str;

	i = 0;
	str = malloc(sizeof(*src));
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
