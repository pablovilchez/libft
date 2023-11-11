/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:31:34 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 19:21:55 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Removes and frees memory from an element of a linked list.
 * @param lst Pointer to the element.
 * @param new Pointer to the function that removes the content of the element.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*aux;

	if (lst)
	{
		(del)(lst->content);
		aux = lst;
		lst = lst->next;
		free(aux);
	}
}
