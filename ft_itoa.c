/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:37:59 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/29 02:23:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(long nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb *= -1;
	}
	while (nb > 0)
	{
		i++;
		nb = nb / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int	i;
    char *tab;
    int x;
    long nb;
	
	i = 0;
	nb = n;
    x = len(nb);
    tab=malloc(sizeof(char)*(x+1));
    if(!tab)
        return (NULL);
    if (nb == 0)
    tab[0] = '0';
    if (nb < 0)
    {
        nb *= -1;
        tab[0] = '-';
    }
    while(nb > 0)
    {
        tab[x-1-i] = nb % 10 + 48;
        nb = nb / 10;
        i++;
    }
    tab[x] = '\0';
    return (tab);
}
