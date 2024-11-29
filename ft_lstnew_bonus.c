/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:38:55 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/24 17:25:04 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
// int main(){
//      char *ptr,*ptr2;
//     t_list *head;
//     t_list *tmp;
//     ptr = ft_strdup("hello");
//     ptr2= ft_strdup("hi");
//     head = ft_lstnew(ptr);
//     tmp = ft_lstnew(ptr2);
//     ft_lstadd_back(&head,tmp);
//     tmp = head;
//     while(tmp){
//         printf("%s\n",(char *)tmp->content);
//         tmp = tmp->next;
//     }
//     printf("%s\n",(char *)head->content);
// }
