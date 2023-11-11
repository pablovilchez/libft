/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:15:00 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 14:25:59 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/**
 * @brief Reserve dynamic memory and assign null value to entire size.
 * Copy the operation of the 'calloc' function from C.
 * @param number Number of items to reserve space for.
 * @param size Space occupied in memory by that type of element.
 */
void	*ft_calloc(size_t number, size_t size)
{
	void	*c;

	c = malloc(number * size);
	if (c != NULL)
		ft_memset(c, 0, number * size);
	return (c);
}
