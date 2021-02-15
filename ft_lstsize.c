#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 1;
	if (lst)
		while (lst->next != NULL)
		{
			lst = lst->next;
			count++;
		}
	else
		count = 0;
	return (count);
}
