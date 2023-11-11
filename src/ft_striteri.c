/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:44:14 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:29:38 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Loop through a string applying a function to each character.
 * @param s String to transform.
 * @param f Pointer to the function to apply.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		(f)(i, &s[i]);
		i++;
	}
}
