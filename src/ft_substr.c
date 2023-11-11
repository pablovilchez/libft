/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:11:08 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 21:13:40 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Reserves memory and returns a substring.
 * @param src Source string.
 * @param start Position of the character to start the new string.
 * @param len Maximum number of characters to copy.
 * @return Pointer to the new string.
 */
char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	char	*dest;
	size_t	s;

	if (ft_strlen(src) <= start)
	{
		dest = (char *)ft_calloc(1, sizeof(char));
		return (dest);
	}
	s = ft_strlen(src) - start;
	if (len < s)
		s = len;
	dest = (char *)ft_calloc(s + 1, sizeof(char));
	if (dest == NULL)
		return (NULL);
	return ((char *)ft_memcpy(dest, &src[start], s));
}
