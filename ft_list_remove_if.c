#include <unistd.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *remove;
	t_list *temp;

	temp = *begin_list;
	while (temp && temp->next)
	{
		if ((*cmp)(temp->next->data, data_ref) == 0)
		{
			remove = temp->next;
			temp->next = temp->next->next;
			free(remove);
		}
		temp = temp->next;
	}
	temp = *begin_list;
	if (temp && (*cmp)(temp->data, data_ref) == 0)
	{
		*begin_list = temp->next;
		free(temp);
	}
}
