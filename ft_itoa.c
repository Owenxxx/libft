/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:20:28 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/21 18:53:04 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	rev_helper(char *str, int length);
static void	cnv_helper(char *temp, long nbr);

char	*ft_itoa(int n)
{
	char	temp[12];
	char	*result;
	long	nbr;

	nbr = n;
	if (nbr == 0)
		return (ft_strdup("0"));
	if (nbr < 0)
	{
		temp[0] = '-';
		cnv_helper(temp + 1, -nbr);
		rev_helper(temp + 1, ft_strlen(temp + 1));
	}
	else
	{
		cnv_helper(temp, nbr);
		rev_helper(temp, ft_strlen(temp));
	}
	result = malloc((ft_strlen(temp) + 1) * sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, temp, ft_strlen(temp) + 1);
	return (result);
}

static void	cnv_helper(char *temp, long nbr)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		temp[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	temp[i] = '\0';
}

static void	rev_helper(char *str, int length)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = length - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
