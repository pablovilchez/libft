/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:03:20 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 19:37:07 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Calculates the number of elements in a linked list.
 * @param lst Pointer to a node.
 * @return Size of the linked list.
 */
int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (lst)
	{
		i = 1;
		while (lst->next != NULL)
		{
			i++;
			lst = lst->next;
		}
	}
	return (i);
}
