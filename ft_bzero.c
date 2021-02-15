#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*src;
	int		i;

	i = 0;
	src = s;
	while (i < (int)n)
		src[i++] = '\0';
}
