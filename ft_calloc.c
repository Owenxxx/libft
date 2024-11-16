/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:20:06 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/15 16:20:07 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size) {
    void *owen;
        if (((count * size) / size) != count)
            return (NULL);
        owen = malloc(count * size);
        if (!owen) {
            return NULL;
    }
    ft_memset(owen, 0, count * size);

    return owen;
}

// #include <stdio.h>
// #include "libft.h"
// int main() {
//     int *arr = (int *)ft_calloc(5, sizeof(int));
    
//     if (arr) {
//         size_t i = 0;
//         while (i < 10000000000000)
//         {
//             printf("%d ", arr[i]);
//             i++;
//         }
//         printf("\n");
//         free(arr);
//     } else {
//         printf("Allocation failed\n");
//     }
//     return 0;
// }
