/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduenas- <aduenas-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 22:21:40 by aduenas-          #+#    #+#             */
/*   Updated: 2023/05/29 22:23:17 by aduenas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_count_c(char const *s, char c)

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
