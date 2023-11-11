/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:10:07 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:17:04 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Send a string and add a newline to a given file descriptor.
 * @param s String to send.
 * @param fd Destination file descriptor.
 */
void	ft_putendl_fd(char *s, int fd)
{
	char	c;

	c = '\n';
	ft_putstr_fd(s, fd);
	write(fd, &c, 1);
}
