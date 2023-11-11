/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:13:51 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 21:16:57 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns the lowercase value of an uppercase character.
 * @param ch Source character.
 * @return Lowercase value if uppercase source. Same value if not.
 */
int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch + 32);
	else
		return (ch);
}
