/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:54:37 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 19:16:26 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Removes and frees reserved memory for a linked list.
 * @param lst Pointer to the head of the list.
 * @param new Pointer to the function that removes the content of each element.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;
	t_list	*aux;

	node = *lst;
	while (node != NULL)
	{
		(del)(node->content);
		aux = node;
		node = node->next;
		free(aux);
	}
	*lst = node;
}
