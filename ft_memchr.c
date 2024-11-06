/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:39:21 by monajjar          #+#    #+#             */
/*   Updated: 2024/10/27 15:54:36 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*src;
	size_t				i;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == (unsigned char)c)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main ()
{
	const char *str = "hello world";
	char *result = ft_memchr(str, ' ', 6);
	printf("%s", result);
}
*/
