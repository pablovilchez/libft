/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:39:21 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:08:50 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

/**
 * @brief Set the content of a memory area.
 * @param str Beginning of memory area.
 * @param c Value to apply.
 * @param n Number of elements to apply to.
 * @return Beginning of memory area.
 */
void	*ft_memset(void *str, int c, unsigned int n)
{
	unsigned int	i;
	char			*p;

	i = 0;
	p = (char *)str;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
