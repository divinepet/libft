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
