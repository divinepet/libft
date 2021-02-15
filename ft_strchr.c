#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int	j;

	j = 0;
	while (str[j] != ch)
	{
		if (str[j] == '\0')
			return (NULL);
		j++;
	}
	if (str[j] == ch)
		return ((char*)&str[j]);
	return (NULL);
}
