/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:06:29 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/05 17:34:12 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_int(long nb)
{
	size_t	nb_len;

	nb_len = 1;
	if (nb < 0)
	{
		nb_len++;
		nb = -nb;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		nb_len++;
	}
	return (nb_len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	n_len;
	char	*nb_str;

	nb = n;
	n_len = count_int(nb);
	nb_str = malloc(n_len + 1);
	if (!nb_str)
		return (NULL);
	nb_str[n_len] = '\0';
	if (nb < 0)
	{
		nb_str[0] = '-';
		nb = -nb;
	}
	n_len = n_len - 1;
	while (n_len > 0)
	{
		nb_str[n_len--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (n > 0 || n == 0)
		nb_str[n_len] = (nb % 10) + '0';
	return (nb_str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int n = -2147483648;
// 	printf("Nour test ----> %s\n", ft_itoa(n));
// }

// char	*int_min_test(int nb)
// {
// 	if (nb == -2147483647)
// 	{
// 		return (ft_strdup("-2147483648"));
// 	}
// 	return (0);
// }
