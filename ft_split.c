/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:21:23 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/16 20:48:51 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_w(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	int		i;

	str = (char **)malloc((count_w(s, c) + 1) * sizeof(char *));
	if (!s || !str)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			str[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	str[i] = NULL;
	return (str);
}
// int main(void)
// {
//     char str[] = "hello world test";
//     char **tab = ft_split(str, '        ');
//     int i = 0;

//     while (tab[i])
//     {
//         printf("%s\n", tab[i]);
//         i++;
//     }
//     return (0);
// }