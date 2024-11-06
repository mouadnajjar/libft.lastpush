/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:05:31 by monajjar          #+#    #+#             */
/*   Updated: 2024/10/29 10:30:49 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		s1_len;
	size_t		s2_len;
	size_t		len;
	char		*string;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	len = s1_len + s2_len + 1;
	string = (char *)malloc(len * sizeof(char));
	if (!string)
		return (NULL);
	ft_strlcpy(string, s1, len);
	ft_strlcat(string, s2, len);
	return (string);
}
/*
#include <stdio.h>
#include <string.h>

int main() {
    // Test case 1: Normal strings
    char *result1 = ft_strjoin("Hello, ", "world!");
    printf("Test 1: %s\n", result1); // Expected: "Hello, world!"
    free(result1);

    // Test case 2: Empty first string
    char *result2 = ft_strjoin("", "world!");
    printf("Test 2: %s\n", result2); // Expected: "world!"
    free(result2);

    // Test case 3: Empty second string
    char *result3 = ft_strjoin("Hello, ", "");
    printf("Test 3: %s\n", result3); // Expected: "Hello, "
    free(result3);

    // Test case 4: Both strings empty
    char *result4 = ft_strjoin("", "");
    printf("Test 4: %s\n", result4); // Expected: ""
    free(result4);

    // Test case 5: Large strings
    char *large1 = malloc(100);
    char *large2 = malloc(100);
    memset(large1, 'A', 99);
    memset(large2, 'B', 99);
    large1[99] = '\0'; // Null-terminate
    large2[99] = '\0'; // Null-terminate

    char *result5 = ft_strjoin(large1, large2);
    printf("Test 5: %s\n", result5); // Expected: "AAAA...BBBB..."
    free(result5);
    free(large1);
    free(large2);

    return 0;
}
*/
