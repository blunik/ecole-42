char *ft_strcpy(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}
