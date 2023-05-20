/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:02:48 by aduenas-          #+#    #+#             */
/*   Updated: 2023/05/20 12:26:54 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;
	unsigned int	j;

	dest = (char*)malloc(sizeof(*s) * (len + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if(i >= start && j < len)
		{
			dest[j] = s[i];
			j++;
		}
		i++;
	}
	dest[j] = 0;
	return (dest);
}
