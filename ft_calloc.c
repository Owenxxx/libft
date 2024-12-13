/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:20:06 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/20 16:01:54 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*owen;

	if (size != 0 && count > 4294967295 / size)
		return (NULL);
	total_size = count * size;
	owen = malloc(total_size);
	if (!owen)
		return (NULL);
	ft_memset(owen, 0, total_size);
	return (owen);
}
