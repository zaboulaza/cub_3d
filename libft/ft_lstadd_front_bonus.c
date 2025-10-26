/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 13:44:41 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:44:08 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

// #include <stdlib.h>
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
// int main()
// {
//     t_list *test = NULL;

//     char deuxieme[] = "ok je deviens 2eme";
//     t_list *new1 = ft_lstnew((char *)deuxieme);

//     char premier[] = "ok je passe 1er";
//     t_list *new2 = ft_lstnew((char *)premier);
//     ft_lstadd_front(&test, new1);
//     ft_lstadd_front(&test, new2);
//     t_list *tmp = test;
//     while (tmp)
//     {
//         printf("Nour test ----> %s\n", (char *)tmp->content);
//         tmp = tmp->next;
//     }
// }
