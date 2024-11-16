/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:21:29 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/15 16:22:42 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] != '\0')
    {
        if(s[i] == (unsigned char)c)
        {
            return (char *)&s[i];
        }
        i++;
    }
    if((unsigned char)c == '\0')
    {
        return (char *)&s[i];
    }
    return NULL;
}