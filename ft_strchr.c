/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaronda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 23:25:26 by elaronda          #+#    #+#             */
/*   Updated: 2020/11/07 23:25:29 by elaronda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	j;

	j = 0;
	while (str[j] != ch)
	{
		if (str[j] == '\0')
			return (NULL);
		j++;
	}
	if (str[j] == ch)
		return ((char*)&str[j]);
	return (NULL);
}
