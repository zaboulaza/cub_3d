/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 12:58:51 by nsmail            #+#    #+#             */
/*   Updated: 2025/04/26 13:22:32 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("Nour test -- 1 ----> %d\n", ft_isalpha(97));
// 	printf("Nour test -- 0 ----> %d\n", ft_isalpha(33));

// 	printf("Vrai test -- 1 ----> %d\n", isalpha(97));
// 	printf("Vrai test -- 0 ----> %d\n", isalpha(33));

// }