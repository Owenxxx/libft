/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:24:45 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/20 15:46:57 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*lastowen;

	i = 0;
	lastowen = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
		{
			lastowen = (char *)&s[i];
		}
		i++;
	}
	if ((char)c == '\0')
	{
		lastowen = (char *)&s[i];
	}
	return (lastowen);
}
