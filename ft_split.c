/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:21:23 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/21 18:52:51 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_array(char **ptr, int i)
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static char	*ft_print_strings(char *str, const char *s, int j, int word_len)
{
	int	i;

	i = 0;
	while (word_len > 0)
	{
		str[i] = s[j - word_len];
		i++;
		word_len--;
	}
	str[i] = '\0';
	return (str);
}

static char	**ft_split_string(char const *s, char c, char **s1, int word_count)
{
	int	j;
	int	word;
	int	word_len;

	j = 0;
	word = 0;
	word_len = 0;
	while (word < word_count)
	{
		while (s[j] && s[j] == c)
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			word_len++;
		}
		s1[word] = (char *)malloc((word_len + 1) * sizeof(char));
		if (!s1[word])
			return (free_array(s1, word));
		ft_print_strings(s1[word], s, j, word_len);
		word_len = 0;
		word++;
	}
	s1[word] = NULL;
	return (s1);
}

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			word_count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char			**s1;
	unsigned int	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	s1 = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!s1)
		return (NULL);
	s1 = ft_split_string(s, c, s1, word_count);
	return (s1);
}
