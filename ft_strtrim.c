/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaronda <elaronda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 23:26:58 by elaronda          #+#    #+#             */
/*   Updated: 2020/11/08 19:18:31 by elaronda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		start_index(char const *s1, char const *set)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (set[k] != '\0')
	{
		if (s1[i] == set[k])
		{
			i++;
			k = 0;
		}
		if (s1[i] != set[k])
			k++;
	}
	return (i);
}

static	int		end_index(char const *s1, char const *set)
{
	int	i;
	int	k;

	k = 0;
	i = ft_strlen((char*)s1) - 1;
	while (set[k] != '\0')
	{
		if (s1[i] == set[k])
		{
			i--;
			k = 0;
		}
		if (s1[i] != set[k])
			k++;
	}
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*dst;

	i = 0;
	if (!s1 || !set)
		return (0);
	start = start_index(s1, set);
	end = end_index(s1, set);
	if (start < 0 || end < 0)
	{
		start = 2;
		end = 0;
	}
	if (!(dst = (char*)malloc(sizeof(char) * ((end - start) + 2))))
		return (NULL);
	while (start <= end)
		dst[i++] = s1[start++];
	dst[i] = '\0';
	return (dst);
}
