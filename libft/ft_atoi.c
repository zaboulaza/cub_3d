/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 04:33:19 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:43:23 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nb)
{
	int	i;
	int	neg;
	int	res;

	res = 0;
	i = 0;
	neg = 0;
	while ((nb[i] >= 9 && nb[i] <= 13) || nb[i] == 32)
		i++;
	if (nb[i] == '-' || nb[i] == '+')
	{
		if (nb[i] == '-')
			neg = 1;
		i++;
	}
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		res = (res * 10) + (nb[i] - '0');
		i++;
	}
	if (neg == 1)
		res = res * -1;
	return (res);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char nb[] = "  -124hj";
// 	printf("Nour test -- -124 ----> %d\n", ft_atoi(nb) * 2);
// 	printf("Vrai test -- -124 ----> %d\n", atoi(nb));
// }