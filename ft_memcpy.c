/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:20:50 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/15 16:20:51 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
        size_t          i;
        unsigned char *dst_p;
        unsigned char *src_p;
    if(dst == NULL && src == NULL)
    {
        return NULL;
    }
	// if(dst == src)
	// 	return (dst);
        src_p = (unsigned char *)src;
        dst_p = (unsigned char *)dst;
    i = 0;
    while(i < n)
    {
        dst_p[i] = src_p[i];
        i++;
    }
    return(dst);
}
// #include <string.h>
// int main()
// {
//     char *src = ft_strdup("Hii");

//     ft_memcpy(src, src, 3);
//     // memcpy(src, src,3);
//     // printf("Copied string: %s\n", src);
//     printf("Copied string in origina3: %s\n", src);
//     return 0;
// }
