/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:21:42 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/15 16:22:34 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    if(!s1 && s2)
        return (ft_strdup(s2));
    if(!s2 && s1)
        return(ft_strdup(s1));
    if(s1 == NULL && s2 == NULL)
        return (NULL);
    char *src;
    int len1 = ft_strlen(s1);
    int len2 = ft_strlen(s2);
    
    src = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (!src)
        return (NULL);

    ft_memcpy(src, s1, len1);
    ft_memcpy(src + len1, s2, len2);
    src[len1 + len2] = '\0';

    return (src);
}
// #include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

// int main() 
// {
//     printf("mine: %s",ft_strjoin(NULL, "ghe"));
// }
