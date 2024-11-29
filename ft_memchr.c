/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:39:02 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 17:42:40 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*st;
	unsigned char	i;
	size_t			x;

	st = (unsigned char *)s;
	i = (unsigned char)c;
	x = 0;
	while (x < n)
	{
		if (st[x] == i)
			return ((void *)&st[x]);
		x++;
	}
	return (NULL);
}
