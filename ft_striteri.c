/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:39:48 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 18:26:10 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
// void capitalize_even(unsigned int i, char *c) {
//      *c=toupper(*c);
// }
// int main(){
//     char s[] = "hey there";
//     ft_striteri(s,capitalize_even);
//     printf("%s",s);   
// }
