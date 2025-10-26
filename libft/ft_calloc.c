/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 01:30:21 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/05 18:14:06 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmenb, size_t size)
{
	void	*str;
	size_t	tailleg;

	tailleg = nmenb * size;
	str = malloc(tailleg);
	if (!str)
		return (NULL);
	ft_bzero(str, tailleg);
	return (str);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("Nour test -- vide ----> %s\n", (char *)ft_calloc(5, sizeof(char)));
// 	printf("Vrai test -- vide ----> %s\n", (char *)calloc(5, sizeof(char)));
// }
