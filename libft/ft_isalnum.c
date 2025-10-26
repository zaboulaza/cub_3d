/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:25:55 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 19:44:50 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c)) || (ft_isdigit(c)))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("Nour test -- 1 ----> %d\n", ft_isalnum('8'));
// 	printf("Nour test -- 0 ----> %d\n", ft_isalnum('@'));

// 	printf("Vrai test -- 1 ----> %d\n", isalnum('8'));
// 	printf("Vrai test -- 0 ----> %d\n", isalnum('@'));

// }