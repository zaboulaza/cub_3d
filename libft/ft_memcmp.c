/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:56:25 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:47:09 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const unsigned char s1[] = "lulu top ez";
// 	const unsigned char s2[] = "lulu top ez";

// 	printf("Nour test -- 0 ----> %d\n", ft_memcmp(s1, s2, sizeof(s1)));
// 	printf("Vrai test -- 0 ----> %d\n", memcmp(s1, s2, sizeof(s1)));

// 	const unsigned char s3[] = "lulu top dz";
// 	const unsigned char s4[] = "lulu top ez";

// 	printf("Nour test -- -neg ----> %d\n", ft_memcmp(s3, s4, sizeof(s3)));
// 	printf("Vrai test -- -neg ----> %d\n", memcmp(s3, s4, sizeof(s3)));

// 	const unsigned char s5[] = "lulu top fz";
// 	const unsigned char s6[] = "lulu top ez";

// 	printf("Nour test -- +pos ----> %d\n", ft_memcmp(s5, s6, sizeof(s5)));
// 	printf("Vrai test -- +pos ----> %d\n", memcmp(s5, s6, sizeof(s5)));
// }