/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:22:07 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/03 13:42:59 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("Nour test -- 1 ----> %d\n", ft_isascii(124));
// 	printf("Nour test -- 0 ----> %d\n", ft_isascii(128));

// 	printf("Vrai test -- 1 ----> %d\n", isascii(124));
// 	printf("Vrai test -- 0 ----> %d\n", isascii(128));

// }