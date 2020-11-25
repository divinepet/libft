/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaronda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 22:52:59 by elaronda          #+#    #+#             */
/*   Updated: 2020/11/07 23:47:29 by elaronda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	unsigned int	i;
	const char		*s;

	if (dst == NULL && src == NULL && n)
		return (NULL);
	s = src;
	d = dst;
	i = 0;
	while (i < (unsigned int)n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
