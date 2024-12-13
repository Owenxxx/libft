/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:17:39 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/24 02:23:38 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_overflow(long result, long before, int sign)
{
	if (result / 10 != before)
	{
		if (sign == -1)
			return (0);
		return (-1);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;
	long	before;
	int		ov_check;

	result = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		before = result;
		result = result * 10 + (*str - '0');
		ov_check = handle_overflow(result, before, sign);
		if (ov_check != 1)
			return (ov_check);
		str++;
	}
	return (sign * result);
}
