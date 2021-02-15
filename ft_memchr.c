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
