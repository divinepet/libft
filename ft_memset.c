#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	int		i;
	char	*src;

	i = 0;
	src = dst;
	while (i < (int)n)
	{
		src[i] = c;
		i++;
	}
	return (src);
}
