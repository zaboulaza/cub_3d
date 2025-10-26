/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 22:48:13 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:44:01 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
	{
		ft_lstlast(*lst)->next = new;
	}
}

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*new;

// 	new = malloc(sizeof(t_list));
// 	if (!new)
// 		return (NULL);
// 	new->content = content;
// 	new->next = NULL;
// 	return (new);
// }
// #include <stdio.h>

// int	main(void)
// {
// 	t_list *ma_list = NULL;
// 	char *s1 = "un";
// 	char *s2 = "deux";
// 	char *s3 = "trois";

// 	t_list *n1 = ft_lstnew((void *)s1);
// 	t_list *n2 = ft_lstnew((void *)s2);
// 	t_list *n3 = ft_lstnew((void *)s3);

// 	ft_lstadd_back(&ma_list, n1);
// 	ft_lstadd_back(&ma_list, n2);
// 	ft_lstadd_back(&ma_list, n3);
//     while (*(char **)ma_list->next != NULL)
//     {
//         printf("%s\n", (char *)ma_list->content);
//         *ma_list = *ma_list->next;
//     }
// }
