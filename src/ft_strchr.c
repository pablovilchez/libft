/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:21:28 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:24:30 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Finds the first occurrence of a character in a string.
 * @param str String to search in.
 * @param c Character to search.
 * @return Pointer to the character found. NULL if not found.
 */
char	*ft_strchr(const char *str, int c)
{
	char	ch;
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)str;
	ch = (char)c;
	while (p[i])
	{
		if (p[i] == ch)
			return (&p[i]);
		i++;
	}
	if (ch == '\0')
		return (&p[i]);
	return (NULL);
}
