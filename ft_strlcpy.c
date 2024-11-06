/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:15:47 by monajjar          #+#    #+#             */
/*   Updated: 2024/10/27 12:44:28 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	s;

	s = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (s);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    char dst[10];
    const char *src = "Hello, World!";
    size_t result = strlcpy(dst, src, sizeof(dst));

    printf("Copied String: %s\n", dst);
    printf("Length of Source: %zu\n", result);

    return 0;
}
*/
