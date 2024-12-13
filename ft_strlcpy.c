/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:21:50 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/24 02:02:33 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_l;

	src_l = ft_strlen(src);
	if (dstsize > 0)
	{
		if (src_l >= dstsize)
		{
			ft_memcpy(dst, src, dstsize);
			dst[dstsize - 1] = '\0';
		}
		else
		{
			ft_memcpy(dst, src, src_l + 1);
		}
	}
	return (src_l);
}
