/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:30:04 by nsmail            #+#    #+#             */
/*   Updated: 2025/04/26 15:32:24 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	printf("Nour test -- 1 ----> %d\n", ft_isprint(124));
// 	printf("Nour test -- 0 ----> %d\n", ft_isprint(128));

// 	printf("Vrai test -- 1 ----> %d\n", isprint(124));
// 	printf("Vrai test -- 0 ----> %d\n", isprint(128));

// }