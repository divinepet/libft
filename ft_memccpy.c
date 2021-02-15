#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*s1;
	unsigned int	i;

	i = 0;
	s = (unsigned char*)dst;
	s1 = (unsigned char*)src;
	while (i < n)
	{
		s[i] = s1[i];
		if (s1[i] == (unsigned char)c)
			return ((void*)dst + i + 1);
		i++;
	}
	return (NULL);
}
