/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:34:59 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/05 18:11:32 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n--)
	{
		if (*s1 == (unsigned char)c)
			return (s1);
		s1++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	unsigned char s[] = "je suis la t'es ou toi ?";

// 	printf("nour test ----> %p\n", ft_memchr(s, 's', 9));
// 	printf("vrai test ----> %p\n", memchr(s, 's', 9));

//     printf("nour test ----> %s\n", (char *)ft_memchr(s, 's', 9));
// 	printf("vrai test ----> %s\n", (char *)memchr(s, 's', 9));
// }