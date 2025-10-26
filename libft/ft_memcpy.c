/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:30:09 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/05 18:02:30 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest1;

	if (!dest && !src)
		return (NULL);
	dest1 = (unsigned char *)dest;
	while (n--)
		*dest1++ = *(unsigned char *)src++;
	return (dest);
}
// #include <stdio.h>
// int main()
// {
// 	char str[] = "bibibadabou";
// 	char str1[125];

// 	ft_memcpy(str1, str, 11);
// 	printf("Nour test ----> %s\n", str1);
// }