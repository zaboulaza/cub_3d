/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:41:16 by nsmail            #+#    #+#             */
/*   Updated: 2025/04/27 21:45:20 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
// #include <ctype.h>
// #include <stdio.h>

// int	main(void)
// {
// 	printf("Nour test oui -- a ----> %c\n", ft_tolower('A'));
// 	printf("Nour test non -- x ----> %c\n", ft_tolower('X'));

// 	printf("vrai test oui -- 9 ----> %c\n", tolower('9'));
// 	printf("vrai test non -- 7 ----> %c\n", tolower('7'));
// }