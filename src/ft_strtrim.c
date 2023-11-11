/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 10:22:47 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 21:11:27 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Reserves memory and returns a string resulting from removing from the
 * beginning and end the characters included in another string.
 * @param s1 String to trim.
 * @param set String with the characters to trim.
 * @return Pointer to the new string.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	l;

	l = 0;
	i = 0;
	if (ft_strlen(s1) > 0)
		l = ft_strlen(s1) - 1;
	if (s1[i] == '\0')
		return ((char *)ft_calloc(1, sizeof(char)));
	while (ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	while (ft_strchr(set, s1[l]) && l > i)
		l--;
	l++;
	if (l - i)
		str = (char *)ft_calloc(l - i + 1, sizeof(char));
	else
		return ((char *)ft_calloc(1, sizeof(char)));
	if (str == NULL)
		return (NULL);
	str = (char *)ft_memcpy(str, &s1[i], l - i);
	return (str);
}
