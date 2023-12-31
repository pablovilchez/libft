/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:10:27 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:43:13 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Copy the content of one string to another.
 * @param dest Destination string.
 * @param src Origin string.
 * @param size Number of characters to copy.
 * @return Size of the source string.
 */
size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	c;

	c = 0;
	while (src[c])
		c++;
	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (c);
}
