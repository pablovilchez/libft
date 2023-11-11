/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 23:24:07 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 19:04:03 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Add a new element to the end of a linked list.
 * @param lst Pointer to the head of the list.
 * @param new Pointer to a new element.
 */
void	ft_lstadd_back(t_list **lst, t_list *new_node)
{
	t_list	*last;

	last = *lst;
	if (last == NULL)
		ft_lstadd_front(lst, new_node);
	else
	{
		last = ft_lstlast(*lst);
		last->next = new_node;
	}
}
