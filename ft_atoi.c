/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:17:39 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/03 23:13:34 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(char *str)
{
    int i;
    long rs;
    int sg;    

    i = 0;
    rs = 0;
    sg = 1;
         while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
            i++;
        if(str[i] == '+' || str[i] == '-')
        {
            if(str[i] == '-')
                sg *= -1;
            i++;
        }
        
        while(str[i] >= '0' && str[i] <= '9')
        {
            rs = rs * 10 + (str[i] - '0');
            if (rs < 0 && sg == 1)
                return (-1);
            if (rs < 0 && sg == -1)
                return (0);
            i++;
        }
        return (rs * sg);
}
// #include <stdio.h>
// #include <libc.h>
// int main()
// {
    
//     printf("dyalhum : %d\n",atoi("21474836472147483647"));
//     printf("Dyali  : %d\n",ft_atoi("21474836472147483647"));
// }