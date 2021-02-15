#include "libft.h"

static	int		word_count(char *s, char c)
{
	int	i;
	int	j;
	int	z;

	i = 0;
	j = 0;
	z = 0;
	while (s[i] != 0)
	{
		while (s[i] != c && s[i] != 0)
			i++;
		if (i != j)
			z++;
		j = i;
		while (s[j] == c && s[j] != 0)
		{
			j++;
			i++;
		}
		j = i;
	}
	return (z);
}

static	int		start_find(char const *s, char c, int pos)
{
	while (s[pos])
	{
		if (s[pos] == c)
			pos++;
		if (s[pos] != c)
			return (pos);
	}
	return (0);
}

static	int		end_find(char const *s, char c, int pos, int start)
{
	pos = start + 1;
	while (s[pos])
	{
		if (s[pos] != c)
			pos++;
		if (s[pos] == c)
			return (pos);
	}
	if (s[pos] == '\0')
		return (pos);
	return (0);
}

static	char	**zzz(char **arr, char const *s, char c, int words)
{
	int pos;
	int k;
	int j;
	int start;
	int end;

	pos = 0;
	k = 0;
	while (words--)
	{
		j = 0;
		start = start_find(s, c, pos);
		end = end_find(s, c, pos, start);
		if (!(arr[k] = (char*)malloc(((end - start) + 1) * sizeof(char))))
			return (NULL);
		while (start < end)
			arr[k][j++] = s[start++];
		arr[k][j] = '\0';
		k++;
		pos = end;
	}
	arr[k] = (NULL);
	return (arr);
}

char			**ft_split(char const *s, char c)
{
	int		words;
	int		start;
	int		end;
	char	**arr;

	start = 0;
	end = 0;
	if (!s)
		return (NULL);
	words = word_count((char*)s, c);
	if (!(arr = (char**)malloc((words + 1) * sizeof(char*))))
		return (NULL);
	return (zzz(arr, s, c, words));
}
