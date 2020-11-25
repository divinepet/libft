/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaronda <elaronda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 23:26:35 by elaronda          #+#    #+#             */
/*   Updated: 2020/11/09 17:46:38 by elaronda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (sub[0] == '\0')
		return ((char*)str);
	while (sub[j] != '\0')
		j++;
	while (str[i] != '\0' && i + j <= (int)len)
	{
		k = 0;
		while (k < j)
			k = (str[i + k] != sub[k]) ? j + 1 : k + 1;
		if (k == j)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
