#include "libft.h"

char	*ft_strnstr(const char *str, const char *sub, size_t len)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (sub[0] == '\0')
		return ((char*)str);
	while (sub[j] != '\0')
		j++;
	while (str[i] != '\0' && i + j <= (int)len)
	{
		k = 0;
		while (k < j)
			k = (str[i + k] != sub[k]) ? j + 1 : k + 1;
		if (k == j)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
