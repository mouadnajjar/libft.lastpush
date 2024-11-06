/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:45:19 by monajjar          #+#    #+#             */
/*   Updated: 2024/10/31 14:37:32 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countlen(long i)
{
	int	c;

	c = 0;
	if (i < 0)
	{
		i = -i;
		c = 1;
	}
	if (i == 0)
		c++;
	while (i > 0)
	{
		c++;
		i = i / 10;
	}
	return (c);
}

char	*ft_itoa(int nb)
{
	int		i;
	char	*string;
	long	n;

	n = nb;
	i = ft_countlen(n);
	string = (char *)malloc(i + 1);
	if (!string)
		return (NULL);
	if (n == 0)
		string[0] = '0';
	string[i] = '\0';
	i = i - 1;
	if (n < 0)
	{
		n = -n;
		string[0] = '-';
	}
	while (n > 0)
	{
		string[i--] = (n % 10) + 48;
		n /= 10;
	}
	return (string);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test_values[] = {
        0,
        1,
        -1,
        42,
        -42,
        2147483647,      // INT_MAX
        -2147483648,     // INT_MIN
        100,             // Positive number
        -100,            // Negative number
        999999,          // Large positive number
        -999999          // Large negative number
    };

    size_t num_tests = sizeof(test_values) / sizeof(test_values[0]);
    for (size_t i = 0; i < num_tests; i++)
    {
        int val = test_values[i];
        char *result = ft_itoa(val);
        if (result)
        {
            printf("ft_itoa(%d) = %s\n", val, result);
            free(result); // Free the allocated memory
        }
        else
        {
            printf("ft_itoa(%d) returned NULL\n", val);
        }
    }

    return 0;
}
*/
