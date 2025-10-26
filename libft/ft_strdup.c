/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 04:05:31 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:48:43 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	tailleg;
	size_t	i;
	char	*sdup;

	i = 0;
	tailleg = ft_strlen(s);
	sdup = malloc(tailleg + 1);
	if (!sdup)
		return (NULL);
	while (i < tailleg)
	{
		sdup[i] = s[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     const char s[] = "trop nul";

//     printf("Nour test -- trop nul ----> %s\n", ft_strdup(s));
//     printf("Vrai test -- trop nul ----> %s\n", strdup(s));
// }