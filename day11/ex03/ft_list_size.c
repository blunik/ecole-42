#include <stdlib.h>
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	t_list *temp;
	int count;

	count = 0;
	if (!begin_list)
		return (count);
	temp = begin_list;
	while(temp)
	{
		temp = temp->next;
		++count;
	}
	return (count);
}
