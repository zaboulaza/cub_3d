/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:03:42 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:50:14 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_l;
	char	*str;

	i = 0;
	s_l = ft_strlen(s);
	if (start >= s_l)
		return (ft_strdup(""));
	if (start + len > s_l)
		str = malloc(s_l - start + 1);
	else
		str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (s[i] && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	const char s[] = "zaboulaza";
// 	printf("Nour test -- zabou ----> %s\n", ft_substr(s, 0, 5));
// }