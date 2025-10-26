/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:33:15 by nsmail            #+#    #+#             */
/*   Updated: 2025/04/27 21:40:29 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("Nour test oui -- a ----> %c\n", ft_toupper('a'));
// 	printf("Nour test non -- X ----> %c\n", ft_toupper('X'));

// 	printf("vrai test oui -- 9 ----> %c\n", toupper('9'));
// 	printf("vrai test non -- 7 ----> %c\n", toupper('7'));
// }