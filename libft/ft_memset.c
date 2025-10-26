/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:47:28 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:47:22 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n--)
		*s1++ = (unsigned char)c;
	return (s);
}
// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char *ptr;
// 	char str[] = "nour";
// 	char str1[] = "nour";
// 	ptr = ft_memset(str, 't', 2);
// 	printf("Nour test -- tttt ----> %s\n", ptr);
// 	printf("%c", *ptr);
// 	memset(str1, 't', 4);
// 	printf("Vrai test -- tttt ----> %s\n", str1);
// }