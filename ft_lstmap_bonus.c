/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <monajjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:59:11 by monajjar          #+#    #+#             */
/*   Updated: 2024/11/06 12:32:00 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*hnode;
	t_list	*head;
	void	*ncontent;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		ncontent = f(lst->content);
		hnode = ft_lstnew(ncontent);
		if (!hnode)
		{
			if (ncontent)
				del(ncontent);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, hnode);
		lst = lst->next;
	}
	return (head);
}
/*
void *hbibna(void *fo9)
{
	printf("%s \n", (char *)fo9);
	return (fo9);
}

void del(void *lst)
{
	free(lst);
}

int main()
{
	t_list *head  = NULL;
	t_list *node1 = ft_lstnew("rit");	
	t_list *node2 = ft_lstnew("mit");	
	t_list *node3 = ft_lstnew("lit");	
	t_list *node4 = ft_lstnew("mit");	
	t_list *node5 = ft_lstnew("ri9");
	
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstadd_back(&head, node4);
	ft_lstadd_back(&head, node5);
	t_list *head2 = ft_lstmap(head, hbibna, del);
}
*/
