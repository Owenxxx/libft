/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojrhaide <ojrhaide@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 06:49:21 by ojrhaide          #+#    #+#             */
/*   Updated: 2024/11/07 16:59:16 by ojrhaide         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
int     ft_tolower(int c);
int     ft_toupper(int c);
int ft_atoi(char *str);
void    *ft_memset(void *b, int c, size_t len);
size_t  ft_strlen(const char *s);
void    *ft_memcpy(void *dst, const void *src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_calloc(size_t count, size_t size);
void    ft_putchar_fd(char c, int fd);
size_t  ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);
void    ft_putendl_fd(char *s, int fd);
void    ft_putstr_fd(char *s, int fd);

#endif