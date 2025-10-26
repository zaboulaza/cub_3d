/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:19:06 by nsmail            #+#    #+#             */
/*   Updated: 2025/04/26 13:22:16 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("Nour test -- 1 ----> %d\n", ft_isdigit('0'));
// 	printf("Nour test -- 0 ----> %d\n", ft_isdigit('c'));

// 	printf("Vrai test -- 1 ----> %d\n", isdigit('0'));
// 	printf("Vrai test -- 0 ----> %d\n", isdigit('c'));

// }