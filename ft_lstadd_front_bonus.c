/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:38:16 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/24 17:17:36 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
// int main()
// {
//     t_list *s;
//     t_list *n;
//     n=NULL;
//     s = ft_lstnew("world");
//     ft_lstadd_front(&n, s);
//     printf("%s",(char *)n->content);
// }
