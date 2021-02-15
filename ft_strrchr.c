#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*buf;
	int			i;
	char		*pos;

	buf = s;
	i = -1;
	pos = NULL;
	while (buf[++i] != '\0')
	{
		if (buf[i] == (unsigned char)c)
			pos = ((char *)buf + i);
	}
	if ((unsigned char)c == '\0')
		return ((char *)buf + i);
	return (pos);
}
