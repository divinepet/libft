#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;
	size_t	s_length;

	i = 0;
	if (!s)
		return (NULL);
	s_length = ft_strlen((char*)s);
	if (len < s_length - start)
	{
		if (!(sub = malloc(len + 1)))
			return (NULL);
	}
	else
	{
		if (!(sub = malloc(s_length - start + 1)))
			return (NULL);
	}
	if (start < s_length)
		while (len-- && s[start] != '\0')
			sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}
