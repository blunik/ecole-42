#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int count;
	t_list *temp;

	count = 0;
	if (!begin_list)
		return (0);
	while (temp)
	{
		temp =tenp->next;
		count++;
	}
	return (count);
}
