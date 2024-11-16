/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:21:46 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/15 16:21:47 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t src_len;
    size_t dst_len;

    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);

    if (dst_len >= dstsize)
        return (dstsize + src_len);

    if (src_len < dstsize - dst_len)
        ft_memcpy(dst + dst_len, src, src_len + 1);
    else
    {
        ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
        dst[dstsize - 1] = '\0';
    }

    return (dst_len + src_len);
}
// #include <stdio.h>
// #include "libft.h"

// int main()
// {
//     char dst[20] = "Hello, ";
//     const char *src = "world!";
//     size_t dstsize = sizeof(dst);

//     size_t result = ft_strlcat(dst, src, dstsize);
//     printf("dst: \"%s\"\n", dst);
//     printf("len: %zu\n", result);

//     return 0;
// }

