/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:36:20 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 13:21:29 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

/**
 * @brief Extracts an integer included at the beginning of a string.
 * Copy the operation of the 'atoi' function from C.
 * @param str String in which you want to search.
 * @return The integer found. 0 if not found.
 */
int	ft_atoi(const char *str)
{
	int	i;
	int	total;
	int	s;

	i = 0;
	total = 0;
	s = 1;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
		s *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		total = total * 10 + (str[i] - '0');
		i++;
	}
	return (total * s);
}
