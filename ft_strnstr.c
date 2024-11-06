/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:16:16 by monajjar          #+#    #+#             */
/*   Updated: 2024/10/26 12:18:42 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main() {
    const char *big = "Hello, world!";
    const char *little1 = "world";
    const char *little2 = "planet";
    const char *little3 = "";

    // Test Case 1: Normal case (substring found).
    char *result = ft_strnstr(big, little1, 13);
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    // Test Case 2: Substring not found.
    result = ft_strnstr(big, little2, 13);
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    // Test Case 3: Empty substring (should return `big`).
    result = ft_strnstr(big, little3, 13);
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    // Test Case 4: Substring found but outside the search limit.
    result = ft_strnstr(big, little1, 5);
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    return 0;
}
*/
