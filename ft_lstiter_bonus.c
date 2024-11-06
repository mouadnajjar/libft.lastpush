/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <monajjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:29:12 by monajjar          #+#    #+#             */
/*   Updated: 2024/11/05 15:24:16 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void zbi(void *content)
{
	printf("%s\n", (char *)content); // Assuming content is a string
}
int main ()
{
	t_list *head = NULL;
	t_list *node1 = ft_lstnew("salam");
	t_list *node2 = ft_lstnew("sala");
	t_list *node3 = ft_lstnew("sal");
	t_list *node4 = ft_lstnew("sa");
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	ft_lstadd_back(&head, node4);
	ft_lstiter(node1, zbi);
}
*/
