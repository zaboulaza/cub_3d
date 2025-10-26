/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 12:30:21 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:49:21 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	size = size - 1;
	while (size-- && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char dest[50];
// 	const char src[] = "je vais bruler la poste";
// 	printf("Nour test -- je vais bruler la poste ----> %ld\n", ft_strlcpy(dest,
// src, 7));
//     ft_strlcpy(dest, src, 7);
// 	printf("Nour test -- je vais bruler la poste ----> %s\n", dest);
// }