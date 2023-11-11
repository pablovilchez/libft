/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:37:57 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:40:05 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Try to add the content of one string to the end of another.
 * @param dst Destination string.
 * @param src Source string.
 * @param size Maximum number of characters to copy.
 * @return Size of the resulting string if it were to be copied.
 */
size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	dst_count;
	size_t	src_count;
	size_t	total;

	dst_count = 0;
	src_count = 0;
	i = 0;
	while (dst[dst_count])
		dst_count++;
	while (src[src_count])
		src_count++;
	if (size == 0)
		return (src_count);
	if (size <= dst_count)
		return (src_count + size);
	total = src_count + dst_count;
	while (src[i] && dst_count < size - 1)
	{
		dst[dst_count] = src[i];
		i++;
		dst_count++;
	}
	dst[dst_count] = '\0';
	return (total);
}
