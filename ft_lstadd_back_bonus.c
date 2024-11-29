/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:38:05 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/24 17:16:43 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
// int main()
// {
//     t_list *s;
//     s = ft_lstnew("you are my");
//     ft_lstadd_back(&s, ft_lstnew(" world"));
//     printf("%s",(char *)s->content);
//     printf("%s",(char *)s->next->content);
// }
