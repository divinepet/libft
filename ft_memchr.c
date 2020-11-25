/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaronda <elaronda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 22:50:27 by elaronda          #+#    #+#             */
/*   Updated: 2020/11/09 17:43:45 by elaronda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;

	i = -1;
	s = (unsigned char*)arr;
	while (++i < n)
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	return (NULL);
}
