/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaronda <elaronda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 19:15:49 by elaronda          #+#    #+#             */
/*   Updated: 2020/11/08 20:58:30 by elaronda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
