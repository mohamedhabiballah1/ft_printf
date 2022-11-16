/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:00:05 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/11/16 01:49:08 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include<unistd.h>
#include<stdarg.h>
#include<stdio.h>
#include<string.h>

size_t	ft_strlen(const char *s);
int	ft_hex(unsigned long n, char *base);
int ft_unsigned(unsigned int n);
int	ft_putstr(char *s);
int ft_putchar(char c);
int ft_putnbr(int n);
int	ft_ptr(unsigned long n);
#endif