#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first;
	t_list	*result;

	first = NULL;
	if (!lst || !f)
		return (NULL);
	if (!(result = ft_lstnew(f(lst->content))))
		return (NULL);
	first = result;
	while (lst->next)
	{
		lst = lst->next;
		if (!(result->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		result = result->next;
	}
	return (first);
}
