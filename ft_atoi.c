/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:17:39 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/07 17:18:37 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(char *str)
{
	long	result = 0; 
	int		sign = 1; 
	long	before;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (*str >= '0' && *str <= '9')
	{
		before = result;
		result = (result * 10) + (*str - '0');
		if ((result / 10) != before)
		{
			if (sign == -1)
			return (0);
			return (-1);
		}
		str++;
	}
	return (sign * result);
}

// #include <stdio.h>
// #include "libft.h"
// int main()
// {
    
//     printf("dyalhum : %d\n",atoi("21474836472147483647"));
//     printf("Dyali  : %d\n",ft_atoi("21474836472147483647"));
// }
