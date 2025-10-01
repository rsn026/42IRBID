#include <stdlib.h>

int	space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	count_words(char *s)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && space(s[i]))
			i++;
		if (s[i] && !space(s[i]))
		{
			count++;
			while (s[i] && !space(s[i]))
				i++;
		}
	}
	return (count);
}

int	word_len(char *s, int start)
{
	int	len;

	len = 0;
	while (s[start + len] && !space(s[start + len]))
		len++;
	return (len);
}

char	**ft_split(char *str)
{
	char	**res;
	int		words;
	int		i;
	int		j;
	int		len;
	int		pos;

	if (!str)
		return (NULL);
	words = count_words(str);
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	pos = 0;
	while (i < words)
	{
		while (str[pos] && space(str[pos]))
			pos++;
		len = word_len(str, pos);
		res[i] = malloc(len + 1);
		if (!res[i])
			return (NULL);
		j = 0;
		while (j < len)
		{
			res[i][j] = str[pos];
			j++;
			pos++;
		}
		res[i][j] = '\0';
		i++;
	}
	res[words] = NULL;
	return (res);
}

