/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <monajjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 20:52:55 by monajjar          #+#    #+#             */
/*   Updated: 2024/11/04 22:20:24 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*node;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		node = (*lst);
		*lst = (*lst)->next;
		ft_lstdelone(node, del);
	}
	*lst = NULL;
}
/*
void del(void *lst)
{
  free(lst);
}
int main ()
{
	int a =10;
	int b =11;
	int c =12;
	int d =13;

	
	t_list *node1 = ft_lstnew(strdup("ah"));
	 t_list *node2 = ft_lstnew(strdup("sa"));
	 ft_lstadd_front(&node1, node2);
	  t_list *node3 = ft_lstnew(strdup("ds"));
	  ft_lstadd_front(&node1, node3);
		printf("this is your values before clearing :
		-\n %s \n %s \n %s \n", (char *)node1->content, 
		-(char *)node2->content, (char *)node3->content);
	  ft_lstclear(&node1, del);
	  if (!node1 && !node2 && !node3)
	  {
		printf("your nodes has been freed");
	  }
}
*/