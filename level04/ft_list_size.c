#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	t_list *temp;
	int size;

	if (!begin_list)
		return (0);
	temp = begin_list;
	while(temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
