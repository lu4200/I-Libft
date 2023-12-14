/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumaret <lumaret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:20:00 by lumaret           #+#    #+#             */
/*   Updated: 2023/12/14 17:05:37 by lumaret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmpnode;
	t_list	*tmp;

	new = NULL;
	while (lst != NULL)
	{
		tmpnode = ft_lstnew(f(lst->content));
		if (!tmpnode)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, tmpnode);
		tmp = lst -> next;
		ft_lstdelone(lst, del);
		lst = tmp;
	}
	return (new);
}
