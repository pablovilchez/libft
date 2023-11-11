/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 00:31:49 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:25:43 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Finds the first occurrence of an element in a memory area.
 * @param str Beginning of the area to search in.
 * @param c Data to search.
 * @param n Maximum number of elements to search in.
 * @return Pointer to the data found. NULL if not found.
 */
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (&p[i]);
		i++;
	}
	return (0);
}
