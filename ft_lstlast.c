#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*p;

	if (lst)
	{
		while (lst->next != NULL)
			lst = lst->next;
		p = lst;
		return (p);
	}
	else
		return (0);
}
