/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:20:58 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/15 16:20:59 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *o = (unsigned char *)b;

    while (len--) 
    {
        *o = (unsigned char)c;
        o++;                   
    }
    return b; 
}
// #include <stdio.h>
// #include <string.h> 
// #include "libft.h"

// int main() {
//     char str1[50] = "yeah";

//     ft_memset(str1, '1', 5);

//     memset(str1, '1', 5);

//     printf("ft_memset: %s\n", str1);
//     printf("memset: %s\n", str1);
//     return 0;
// }