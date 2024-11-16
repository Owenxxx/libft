/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 16:21:10 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/15 16:22:49 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    long nbr;
    if (fd <= 0)
        return;
    nbr = (long)n;
    if (nbr < 0)
    {
        ft_putchar_fd('-', fd);
        nbr *= -1;
    }
    if (nbr >= 10)
        ft_putnbr_fd(nbr / 10, fd);
    ft_putchar_fd((nbr % 10) + 48, fd);
} 
// #include "libft.h"

// int main(void)
// {
//     int number = -12723767545;
//     int fd = 1;

//     ft_putnbr_fd(number, fd);
//     ft_putchar_fd('\n', fd);

//     return 0;
// }
