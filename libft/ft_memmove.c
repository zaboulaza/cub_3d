/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 05:04:58 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:47:18 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	if (d <= s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
// #include <stdio.h>
// void	*ft_memmove(void *dest, const void *src, size_t n);
// int	main(void)
// {
// 	char str1[20] = "HelloWorld";
// 	// Test avec chevauchement (src avant dest)
// 	printf("Avant : %s\n", str1);
// 	ft_memmove(str1 + 2, str1, 5); // copie "Hello" dans str1 + 2
// 	printf("Après : %s\n", str1);  // attendu : "HeHellorld"
// 	// Test sans chevauchement (dest avant src)
// 	char str2[20] = "HelloWorld";
// 	printf("\nAvant : %s\n", str2);
// 	ft_memmove(str2, str2 + 5, 5); // copie "World" au début
// 	printf("Après : %s\n", str2);  // attendu : "WorldWorld"
// 	return (0);
// }