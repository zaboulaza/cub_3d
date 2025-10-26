/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 12:22:04 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/05 21:36:45 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (c == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	start;
	size_t	i;
	size_t	end;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	start = i;
	i = ft_strlen(s1);
	while (s1[i - 1] && is_in_set(s1[i - 1], set))
		i--;
	end = i;
	if (start >= end)
		return (ft_strdup(""));
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	const char str[] = "lorem ipsum dolor sit amet";
// 	const char ret[] = "te";
// 	printf("Vrai test ----> %s\n", ft_strtrim(str, ret));
// }