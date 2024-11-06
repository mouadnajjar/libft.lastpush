/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monajjar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:42:18 by monajjar          #+#    #+#             */
/*   Updated: 2024/10/30 20:31:10 by monajjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*str;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	str = malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char myfunc(unsigned int i, char c)
{
        return (c + i);
}

#include <stdio.h>

int main ()
{
        const char *original = "abcd";
        char *result = ft_strmapi(original, myfunc);

        if(result)
        {
                printf("original : %s \n", original);
                printf("the mapped : %s \n", result);
                free(result);
        }
        else
                printf("erro");
        return (0);
}
*/
