/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:20:54 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/15 16:20:55 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char    *src_p;
    unsigned char    *dst_p;

    src_p = (unsigned char *)src;
    dst_p = (unsigned char *)dst;
    if (dst == src || len ==  0)
        return (dst);
    if (dst_p > src_p)
        while (len--)
            dst_p[len] = src_p[len];
    else
        ft_memcpy(dst_p, src_p, len);
    return (dst);
}
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[20] = "Hello, World!";
//     char str2[20] = "Hello, World!";
    
//     ft_memmove(str1, str1, 13);  // Overlapping
//     memmove(str2, str2, 13);      // Overlapping

//     printf("Dyali: %s\n", str1);
//     printf("Dyalhom: %s\n", str2); 

//     return 0;
// }
