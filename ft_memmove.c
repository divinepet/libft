/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaronda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 22:54:14 by elaronda          #+#    #+#             */
/*   Updated: 2020/11/07 23:41:15 by elaronda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned int	i;

	if (dst == NULL && src == NULL && n)
		return (NULL);
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	i = 0;
	if (d < s)
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dst);
}
