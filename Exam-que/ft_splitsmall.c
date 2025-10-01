#include <stddef.h>

static int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

char	**ft_split(char *str)
{
	static char *arr[1024];
	int			i;
	int			w;

	if (!str)
		return (NULL);
	i = 0;
	w = 0;
	while (str[i] && w < 1023)
	{
		while (str[i] && is_space(str[i]))
		{
			str[i] = '\0';
			i++;
		}
		if (str[i])
		{
			arr[w++] = &str[i];
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	arr[w] = NULL;
	return (arr);
}

