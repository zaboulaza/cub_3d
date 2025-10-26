/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 01:51:05 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:45:46 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
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
// int main(void)
// {
// 	char *s1 = "un";
// 	char *s2 = "deux";
// 	char *s3 = "trois";

// 	t_list *n1 = ft_lstnew((void *)s1);
// 	t_list *n2 = ft_lstnew((void *)s2);
// 	t_list *n3 = ft_lstnew((void *)s3);

// 	n1->next = n2;
//     n2->next = n3;
//     n3->next = NULL;
// 	t_list *ma_list = n1;
//     while (ma_list)
//     {
//         printf("%s\n", (char *)ma_list->content);
//         ma_list = ma_list->next;
//     }

//     ft_lstclear(&n1, del);

//     while (ma_list)
//     {
//         printf("%s\n", (char *)ma_list->content);
//         ma_list = ma_list->next;
//     }
// }
