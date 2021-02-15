#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*p;

	p = malloc(size * num);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, (size * num));
	return (p);
}
