/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:43:11 by monajjar          #+#    #+#             */
/*   Updated: 2024/10/30 20:29:13 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
#include <stdio.h>

void alternate_case(unsigned int i, char *c) {
    if (i % 2 == 0) {
        *c = ft_toupper(*c);
    } else {
        *c = ft_tolower(*c);
    }
}

int main() {
    char str[] = "hello world";
    ft_striteri(str, alternate_case);
    printf("Modified string: %s\n", str);  // Output: "hEllO wOrld"
    return 0;
}
*/
