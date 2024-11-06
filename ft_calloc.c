/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:21:40 by monajjar          #+#    #+#             */
/*   Updated: 2024/11/01 19:17:46 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*p;
	size_t	box;

	if (nmemb == 0 || size == 0)
	{
		p = malloc (0);
		if (!p)
			return (NULL);
		return (p);
	}
	if (nmemb == SIZE_MAX || size == SIZE_MAX || nmemb > SIZE_MAX / size)
		return (NULL);
	box = nmemb * size;
	p = malloc(box);
	if (!p)
		return (NULL);
	ft_memset(p, 0, box);
	return (p);
}
/*
#include <stdio.h>
#include <stdint.h>

int main() {
    void* ptr;

    // Test 1: Normal allocation
    ptr = ft_calloc(1, 100);
    if (ptr) {
        printf("Test 1 Passed: Normal allocation\n");
        free(ptr);
    } else {
        printf("Test 1 Failed: Normal allocation\n");
    }

    // Test 2: Zero elements
    ptr = ft_calloc(0, 10);
    if (ptr) {
        printf("Test 2 Passed: Zero elements allocation\n");
        free(ptr);
    } else {
        printf("Test 2 Failed: Zero elements allocation\n");
    }

    // Test 3: Allocation with SIZE_MAX
    ptr = ft_calloc(1, SIZE_MAX);
    if (ptr) {
        printf("Test 3 Failed: Allocation with SIZE_MAX should return NULL\n");
        free(ptr);
    } else {
        printf("Test 3 Passed: Allocation with SIZE_MAX returned NULL\n");
    }

    // Test 4: Overflow case
    ptr = ft_calloc(SIZE_MAX, 2);
    if (ptr) {
        printf("Test 4 Failed: Overflow case should return NULL\n");
        free(ptr);
    } else {
        printf("Test 4 Passed: Overflow case returned NULL\n");
    }

    // Test 5: Valid large allocation
    ptr = ft_calloc(SIZE_MAX / 2, 2);
    if (ptr) {
        printf("Test 5 Passed: Valid large allocation\n");
        free(ptr);
    } else {
        printf("Test 5 Failed: Valid large allocation\n");
    }

    // Test 6: Allocation with one element of maximum size
    ptr = ft_calloc(1, SIZE_MAX / 2);
    if (ptr) {
        printf("Test 6 Passed: Allocation with maximum valid size\n");
        free(ptr);
    } else {
        printf("Test 6 Failed: Allocation with maximum valid size\n");
    }

    return 0;
}
*/
