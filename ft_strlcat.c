#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	i = 0;
	while (dst[i])
		i++;
	dst_size = i;
	src_size = 0;
	if (size > i)
		while (src[src_size] && size - i > 1)
			dst[i++] = src[src_size++];
	dst[i] = '\0';
	while (src[src_size])
		src_size++;
	if (dst_size > size)
		return (size + src_size);
	return (dst_size + src_size);
}
