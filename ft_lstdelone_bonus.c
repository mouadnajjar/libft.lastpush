/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <monajjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:37:10 by monajjar          #+#    #+#             */
/*   Updated: 2024/11/04 19:28:47 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*
void delete(void *ls)
{
	free(ls);   
}
int main ()
{
	int s =10;
	
	t_list *node1 = ft_lstnew(&s);
	printf("this is the your node before 
	deleting the content : %d \n",*(int*)(node1->content));
	ft_lstdelone(node1, delete);
	printf("this is your content after
	 the deleting : %d \n", (int)(node1->content));
}
*/
