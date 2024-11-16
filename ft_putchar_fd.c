/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:21:02 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/16 16:41:15 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
	{
		write(2, "Failed to take this number\n", 27);
		return ;
	}
	write(fd, &c, 1);
}
// int main(void)
// {
//     ft_putchar_fd('A', 1);
//     ft_putchar_fd('\n', 1);
    
//     ft_putchar_fd('B', 2);
//     ft_putchar_fd('\n', 2);
    
//     ft_putchar_fd('C', -1);
    
//     return (0);
// }