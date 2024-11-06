/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <monajjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:55:02 by monajjar          #+#    #+#             */
/*   Updated: 2024/11/06 17:03:21 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		sl;
	char		*substr;

	if (!s)
		return (0);
	sl = ft_strlen(s);
	if (start >= sl)
		len = 0;
	else if (start + len > sl)
	{
		len = sl - start;
	}
	substr = malloc((len + 1) * sizeof(char));
	if (!substr)
		return (0);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}
/*
#include <stdio.h>

int main() {
    const char *str = "hello world";
    char *result = ft_substr(str, 13, 4);

    if (result) {
        printf("Substring: '%s'\n", result);
        free(result); // Free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/