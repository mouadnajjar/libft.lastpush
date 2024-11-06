/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:20:38 by monajjar          #+#    #+#             */
/*   Updated: 2024/11/03 20:10:35 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	const unsigned char	*ss;

	s = (const unsigned char *)s1;
	ss = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s[i] != ss[i])
			return (s[i] - ss[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
int main ()
{
	//char *s = "qwerty";
	//char *ss = "Qwerty";
	const int n = 5;
	printf("%d, %d", ft_memcmp("Hello", "hella", n),
   	memcmp("Hello", "hella", n));
}
*/
