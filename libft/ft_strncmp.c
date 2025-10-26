/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:00:02 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 22:46:16 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char s1[] = "lulu top ez";
// 	char s2[] = "lulu top ez";
// 	printf("Nour test -- 0 ----> %d\n", ft_strncmp(s1, s2, sizeof(s1)));
// 	printf("Vrai test -- 0 ----> %d\n", strncmp(s1, s2, sizeof(s1)));
// 	char s3[] = "lulu top dz";
// 	char s4[] = "lulu top ez";
// 	printf("Nour test -- -neg ----> %d\n", ft_strncmp(s3, s4, sizeof(s3)));
// 	printf("Vrai test -- -neg ----> %d\n", strncmp(s3, s4, sizeof(s3)));
// 	char s5[] = "lulu top fz";
// 	char s6[] = "lulu top ez";
// 	printf("Nour test -- +pos ----> %d\n", ft_strncmp(s5, s6, sizeof(s5)));
// 	printf("Vrai test -- +pos ----> %d\n", strncmp(s5, s6, sizeof(s5)));
// }