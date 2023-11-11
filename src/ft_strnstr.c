/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:06:53 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:49:55 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Finds a string within another string.
 * @param haystack String to search in.
 * @param needle String to search.
 * @return Pointer to the string found. NULL if not found.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = 0;
	j = 0;
	res = NULL;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (len > 0 && haystack[i])
	{
		while (haystack[i] == needle[j] && i < len)
		{
			if (j == 0)
				res = (char *)&haystack[i];
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *)res);
		}
		i = i + 1 - j;
		j = 0;
		res = NULL;
	}
	return ((char *)res);
}
