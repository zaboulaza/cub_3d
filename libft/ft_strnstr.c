/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 21:32:00 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:49:47 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	if (s2[i] == '\0')
		return ((char *)str1);
	while (str1[i] && i < len)
	{
		j = 0;
		if (str1[i] == s2[j])
		{
			start = i;
			while (str1[i + j] == s2[j] && i + j < len)
			{
				j++;
				if (s2[j] == '\0')
					return ((char *)(str1 + start));
			}
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	const char str1[] = "LOL non TFT oui";
// 	const char s2[] = "TFT";
// 	printf("Nour test -- TFT oui ----> %s\n", ft_strnstr(str1, s2, 13));
// 	// printf("Vrai test -- TFT oui ----> %s\n", strnstr(str1, s2, 13));
// }