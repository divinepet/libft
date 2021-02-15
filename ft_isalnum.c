#include "libft.h"

int	ft_isalnum(int ch)
{
	return (((ch >= '0' && ch <= '9') ||
				(ch >= 'a' && ch <= 'z') ||
				(ch >= 'A' && ch <= 'Z')) ? 1 : 0);
}
