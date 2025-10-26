/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 20:33:00 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/16 17:39:08 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	compt;

	if (lst == NULL)
		return (0);
	compt = 1;
	while (lst->next != 0)
	{
		lst = lst->next;
		compt++;
	}
	return (compt);
}

// #include <stdio.h>

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
// int	main(void)
// {
// 	t_list *lst = ft_lstnew((void *)"1");
// 	t_list *de = ft_lstnew((void *)"2");
// 	t_list *fr = ft_lstnew((void *)"3");
// 	lst->next = de;
// 	de->next = fr;
// 	fr->next = NULL;
// 	int c = ft_lstsize(lst);
// 	printf("%d", c);
// }