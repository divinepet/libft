#include "libft.h"

int	ft_memcmp(const void *arr1, const void *arr2, size_t n)
{
	int				i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)arr1;
	s2 = (unsigned char*)arr2;
	i = 0;
	while (n--)
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}
