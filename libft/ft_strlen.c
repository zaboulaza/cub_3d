/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:33:41 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:49:26 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
//     printf("Nour test %zu\n", ft_strlen("123456789"));
//     printf("Vrai test %zu\n", strlen("123456789"));
// }