#include <stdlib.h>

void ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *list1;
	t_list *list2;
	t_list *temp;

	list1 = *begin_list;
	while (list1)
	{
		list2 = *begin_list;
		while (list2->next)
		{
			if ((*cmp)(list2->data, list2->next->data) > 0)
			{
				temp = list2->data;
				list2->data = list2->next->data;
				list2->next->data = temp;
			}
			list2 = list2->next;
		}
		list1 = list1->next;
	}
}
