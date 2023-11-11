/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 16:37:38 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 12:49:26 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Applies the null value to locations in memory. Unprotected memory.
 * @param start Pointer to initial position.
 * @param size String in which you want to search.
 */
void	ft_bzero(void *start, size_t size)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)start;
	while (i < size)
	{
		p[i] = '\0';
		i++;
	}
}
