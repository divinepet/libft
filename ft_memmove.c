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
