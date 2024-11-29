/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 17:15:40 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 17:50:21 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	size_t			i;

	i = 0;
	if (!src && !dst)
	{
		return (NULL);
	}
	tmpdst = (unsigned char *)dst;
	tmpsrc = (unsigned char *)src;
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
	}
	return (dst);
}
/*int main()
{
    char src[]= "hello, world?";

    char *dest=&src[5];
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    ft_memcpy(dest,src,sizeof(int));
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
}*/
