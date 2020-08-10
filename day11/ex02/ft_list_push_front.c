#include "ft_lust.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *element;

	if (*begin_list)
	{
		element = ft_create_elem(data);
		elemnt->next = *begin_list;
		*begin_list = element;
	}
	else
		*begin_list = ft_create_elem(data);
}
