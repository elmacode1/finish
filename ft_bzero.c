/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:30:50 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/24 16:52:13 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
/*int main(){
    int *str=malloc(5);
    int i=0;
      while(i<5){
        str[i]=i+1;
        i++;
    }
    i=0;
    while(i<5){
        printf("str[%d]=%d\n",i,str[i]);
        i++;
    }
    ft_bzero(str,4*4);
    i=0;
    while(i<5){
        printf("str[%d]=%d\n",i,str[i]);
        i++;
    }
    }*/
