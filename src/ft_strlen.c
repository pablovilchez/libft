/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 11:33:20 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:44:53 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

/**
 * @brief Calculate the size of a string.
 * @param str String to count.
 * @return Size of the string.
 */
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}
