/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:07:19 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:49:09 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	a;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = dest_len;
	a = 0;
	if (dest_len >= size)
		return (size + src_len);
	while (i < (size - 1) && src[a])
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	dest[i] = '\0';
	return (src_len + dest_len);
}
// #include <stdio.h>
// #include <bsd/string.h>

// int main()
// {
//     char dest[78] = "marion";
//     const char src[] = "la plus belle des Le Pen";

//     printf("dest len = %ld\n", ft_strlen(dest));
//     printf("src len = %ld\n", ft_strlen(src));
//     printf("dest + src len = %ld\n", ft_strlen(dest) + ft_strlen(src));
//     printf("\n");

//     char dest1[78] = "marion";

//     printf("Nour test -- marion la plus belle des Le Pen ----> %ld\n",
	// ft_strlcat(dest, src, 21));
//     printf("Vrai test -- marion la plus belle des Le Pen ----> %zu\n",
	// strlcat(dest1, src, 21));
// }
