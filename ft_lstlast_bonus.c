/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 20:14:14 by monajjar          #+#    #+#             */
/*   Updated: 2024/11/03 20:41:47 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>
#include <stdlib.h>

// Assuming t_list and ft_lstlast are defined as above

int main() {
    // Create nodes
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));

	
    // Initialize nodes
    node1->content = "First";
    node1->next = node3;

    node2->content = "Second";
    node2->next = node3;

    node3->content = "Last";
    node3->next = NULL;

    // Find last node
    t_list *last = ft_lstlast(node1);

    // Print last node content
    if (last) {
        printf("Last node content: %s\n", (char *)last->content);
    } else {
        printf("List is empty.\n");
    }

    // Free allocated memory
    free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
