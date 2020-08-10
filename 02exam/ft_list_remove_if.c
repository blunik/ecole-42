#include <unistd.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *temp;
	t_list *current;

	current = *begin_list;
	while(current && current->next)
	{
		if ((*cmp)(current->next->data, data_ref) == 0)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp);
		}
		current = current->next;
	}
	current = *begin_list;
	if (current && (*cmp)(current->data, data_ref) == 0)
	{
		*begin_list = current->next;
		free(current);
	}
}
