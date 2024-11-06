/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 15:28:11 by monajjar          #+#    #+#             */
/*   Updated: 2024/11/02 16:35:42 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*fnode;

	fnode = malloc(sizeof(t_list));
	if (!fnode)
		return (fnode = NULL);
	fnode->content = content;
	fnode->next = NULL;
	return (fnode);
}
/*
int main ()
{
	t_list *node = ft_lstnew("hello world");
	printf("%s \n",(char *)node->content);

}
*/
