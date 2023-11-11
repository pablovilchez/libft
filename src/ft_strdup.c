/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:40:06 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:27:29 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Reserve memory and duplicate a string.
 * @param s String to copy.
 * @return Pointer to the copied string.
 */
char	*ft_strdup(const char *s)
{
	size_t	l;
	char	*str;

	l = ft_strlen(s) + 1;
	str = (char *)malloc(l);
	if (str != NULL)
		ft_strlcpy(str, (char *)s, l);
	return (str);
}
