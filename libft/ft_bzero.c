/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 20:07:46 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:51:55 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	while (n--)
		*(unsigned char *)ptr++ = '\0';
}
// #include <string.h>
// #include <stdio.h>

// int main()
// {
//     unsigned char ptr[] = "zoubida zoubidou";

//     printf("test a vide ----> %s\n", ptr);

//     ft_bzero(ptr, sizeof(ptr));
//     printf("Nour test a vide ----> %s\n", ptr);

//     bzero(ptr, sizeof(ptr));
//     printf("Vrai test a vide ----> %s\n", ptr);
// }