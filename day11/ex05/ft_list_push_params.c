#include <stdlib.h>
#include "ft_list.h"

t_list *ft_list_push_params(int ac, char **av)
{
	t_list *tmp;
	t_list *list;
	int i;

	if (ac < 1)
		return (NULL);
	i = 0;
	tmp = NULL;
	while(i < ac)
	{
		list = ft_create_elem(av[i]);
		list->next = tmp;
		tmp = list;
		i++;
	}
	return (list);
}
