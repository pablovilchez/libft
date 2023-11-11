/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvilchez <pvilchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:38:13 by pvilchez          #+#    #+#             */
/*   Updated: 2023/11/11 13:32:07 by pvilchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	num_len(long n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	if (i == 0)
		return (1);
	return (i);
}

void	comp_num(char *res, long num, size_t s)
{
	while (num > 0)
	{
		res[s] = (num % 10) + '0';
		num /= 10;
		if (s > 0)
			s--;
	}
}

/**
 * @brief Convert an integer to a string.
 * @param num String in which you want to search.
 * @return The integer found. (integer value is 0 if not found)
 */
char	*ft_itoa(int num)
{
	size_t	s;
	long	cast_num;
	char	*res;

	cast_num = (long)num;
	if (cast_num < 0)
		cast_num *= -1;
	s = num_len(cast_num);
	if (cast_num < 0)
		s++;
	res = ft_calloc(s + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	if (cast_num < 0)
		res[0] = '-';
	if (cast_num == 0)
		res[0] = '0';
	else
		comp_num(res, cast_num, s - 1);
	return (res);
}
