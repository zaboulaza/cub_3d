/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 18:40:30 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 22:35:59 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_strrchr(const char *s, int c)
// {
// 	size_t	i;

// 	i = ft_strlen(s) -1;
// 	if (s[i] == c)
// 		return ((char *)s + i);
// 	while (i--)
// 	{
// 		if (s[i] == (unsigned char)c)
// 			return ((char *)s + i);
// 	}
// 	if ((unsigned char)c == '\0')
// 		return ((char *)s + i);
// 	return (NULL);
// }

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i - 1] == (unsigned char)c)
			return ((char *)s + (i - 1));
		i--;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s + ft_strlen(s));
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("Nour -- test ----> %s\n", ft_strrchr("tripouille", 0));
// 	printf("Nour -- test ----> %s\n", strrchr("tripouille", 0));
// 	printf("%s\n", strrchr("teste", 1024));
// 	printf("%s\n", ft_strrchr("teste", 1024));
// }
