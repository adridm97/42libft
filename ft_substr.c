#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int	i;
	int	j;

	dest = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if(i >= start && j < len)
		{
			str[j] = s[i]
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
