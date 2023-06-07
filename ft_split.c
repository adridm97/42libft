/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:21:40 by aduenas-          #+#    #+#             */
/*   Updated: 2023/06/07 20:43:12 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_c(char const *s, char c)
{
	int	i;
	int n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			n++;
		i++;
	}
	return (n);
}
char	*ft_word(const char *s, int start, int end)
{
	size_t	i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}
void	ft_write(char **split, char const *s, char c)
{
	size_t i;
	size_t j;
	int	copy;

	i = 0;
	j = 0;
	copy = -1;
	while ( i <= ft_strlen(s))
	{
		if (s[i] != c && copy < 0)
			copy = i;
		else if ((s[i] == c || i == ft_strlen(s)) && copy >= 0)
		{
			split[j++] = ft_word(s, copy, i);
			copy = -1;
		}
		i++;
	}
	split[j] = 0;
}
char	**ft_split(char const *s, char c)
{
	char **split;

	if (!s)
		return (0);
	split = malloc((ft_count_c(s, c) + 1) * sizeof(char *));
	if (!split)
		return(0);
	ft_write(split, s, c);
	return (split);
}
