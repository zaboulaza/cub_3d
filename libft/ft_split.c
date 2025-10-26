/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsmail <nsmail@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:30:42 by nsmail            #+#    #+#             */
/*   Updated: 2025/06/16 19:58:05 by nsmail           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static size_t	count_word(const char *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

static char	*malloc_word(char *str, char c)
{
	size_t	len;
	char	*new_str;

	len = 0;
	while (*str == c)
		str++;
	while (str[len] != c && str[len] != '\0')
	{
		len++;
	}
	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, str, len + 1);
	return (new_str);
}

char	**ft_split(char const *s, char c)
{
	char	**tab_g;
	size_t	i;

	tab_g = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!tab_g)
		return (NULL);
	tab_g[count_word(s, c)] = NULL;
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		while (*s && *s != c)
		{
			tab_g[i] = malloc_word((char *)s, c);
			if (!tab_g[i])
				return (free_all(tab_g), NULL);
			while (*s && *s != c)
				s++;
		}
		i++;
	}
	return (tab_g);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "lorem ipsum c Suspendisse";
// 	char	c;
// 	char	**res;
// 	size_t	i;

// 	c = ' ';
// 	res = ft_split(str, c);
// 	i = 0;
// 	printf("%zu\n", count_word(str, c));
// 	while (res[i])
// 	{
// 		printf("tab[%zu] = %s\n", i, res[i]);
// 		i++;
// 	}
// 	return (0);
// }
