/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 09:47:26 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:31:36 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Reserve memory and create a string from two others.
 * @param s1 First string.
 * @param s1 Second string.
 * @return Pointer to the new string.
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;

	dest = (char *)ft_calloc((ft_strlen(s1) + ft_strlen(s2) + 1), sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest = ft_memcpy(dest, s1, ft_strlen(s1));
	ft_memcpy(&dest[ft_strlen(s1)], s2, ft_strlen(s2));
	return (dest);
}
