/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaronda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 23:26:03 by elaronda          #+#    #+#             */
/*   Updated: 2020/11/07 23:26:06 by elaronda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t			cnt;
	unsigned char	*s1;
	unsigned char	*s2;
	unsigned int	i;

	if (!src)
		return (0);
	s1 = (unsigned char*)src;
	s2 = (unsigned char*)dst;
	i = 0;
	cnt = 0;
	while (src[cnt] != '\0')
		cnt++;
	if (n == 0)
		return (cnt);
	while ((i < n - 1) && (s1[i] != '\0'))
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (cnt);
}
