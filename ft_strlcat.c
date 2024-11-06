/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <monajjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:21:50 by monajjar          #+#    #+#             */
/*   Updated: 2024/11/05 11:44:36 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	s = ft_strlen(src);
	if (size == 0 && !dst)
		return (s);
	d = ft_strlen(dst);
	if (d >= size)
		return (size + s);
	j = d;
	i = 0;
	while (src[i] && i < size - d - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (d + s);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{


    size_t result = ft_strlcat(NULL, "gello" , 0);


    printf("Total length that would have been created: %zu\n", result);

    return 0;
}
*/
