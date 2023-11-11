/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:06:04 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:05:33 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief Copy the contents of a memory area.
 * @param dest Destination memory area.
 * @param src Origin memory area.
 * @param n Number of elements to copy.
 * @return Destination memory area.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	if (src == NULL && dest == NULL)
		return (0);
	d = (char *)dest;
	s = (char *)src;
	i = 0;
	if (d > s)
		while (n-- != 0)
			d[n] = s[n];
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
