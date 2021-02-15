#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;
	t_list	*tmp;

	if (!lst || !lst || !del)
		return ;
	p = *lst;
	while (p != NULL)
	{
		del(p->content);
		tmp = p;
		p = p->next;
		free(tmp);
	}
	*lst = NULL;
}
