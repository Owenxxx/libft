/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:20:35 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/15 16:20:36 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = s;
    unsigned char uc = (unsigned char)c;

    while (n) {
        if (*ptr == uc) {
            return (void *)ptr;
        }
        ptr++;
        n--;
    }
    return NULL;
}