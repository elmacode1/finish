/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:38:51 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/28 22:57:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;
	char *str;
	new = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		str = (*f)(lst->content);
		tmp = ft_lstnew(str);
		if (!tmp)
		{
			free(str);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
// void *toup(void *s){
// 	int i=0;
// 	char *m;
// 	m = (char *)s;
// 	while(m[i]){
// 		m[i]=ft_toupper(m[i]);
// 		i++;
// 	}
// 	return ((void *)m);
// }
// void delete(void *s){
// 	free(s);
// }
// int main(){
// 	t_list *list;
// 	t_list *new;
// 	list = ft_lstnew(ft_strdup("malak"));
// 	ft_lstadd_back(&list,ft_lstnew(ft_strdup("taha")));
// 	new = ft_lstmap(list,toup,delete);
// 	while(new){
// 		printf("%s",(char *)new->content);
// 		new = new->next;
// 	}
// }
		