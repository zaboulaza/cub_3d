/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 01:16:26 by nsmail            #+#    #+#             */
/*   Updated: 2025/05/04 18:45:57 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void del(void *ft_free)
// {
//     free(ft_free);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
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
// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }
// char	*ft_strdup(const char *s)
// {
// 	size_t	tailleg;
// 	size_t	i;
// 	char	*sdup;

// 	i = 0;
// 	tailleg = ft_strlen(s);
// 	sdup = malloc(tailleg + 1);
// 	if (!sdup)
// 		return (NULL);
// 	while (i < tailleg)
// 	{
// 		sdup[i] = s[i];
// 		i++;
// 	}
// 	sdup[i] = '\0';
// 	return (sdup);
// }
// #include <stdio.h>
// int main(void)
// {
//     t_list *new = ft_lstnew((void *)ft_strdup("vide"));
//     printf("test ----> %s\n", (char *)new->content);

//     ft_lstdelone(new, del);
//     printf("test ----> %s\n", (char *)new->content);

// }
