/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:18:49 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 20:18:40 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	reverse(long num, int fd)
{
	char	c;

	if (num >= 10)
		reverse(num / 10, fd);
	c = num % 10 + '0';
	ft_putchar_fd(c, fd);
}

/**
 * @brief Send an integer to a given file descriptor.
 * @param s Number to send.
 * @param fd Destination file descriptor.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = (long)n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (n == 0)
		ft_putchar_fd('0', fd);
	if (n != 0)
		reverse(num, fd);
}
