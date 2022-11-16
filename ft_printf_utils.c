/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 01:00:02 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/11/16 01:47:37 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long n, char *base)
{
	int i;
	
	i = 0;
	if(n >= 16)
		i += ft_hex((n / 16), base);
	i += ft_putchar(base[n % 16]);
	return (i);
}
int	ft_ptr(unsigned long n)
{
	int i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_hex(n, "0123456789abcdef");
	return(i);
}

int	ft_putstr(char *s)
{
	write (1, s, ft_strlen(s));
    return(ft_strlen(s));
}

int ft_unsigned(unsigned int n)
{
	int i;

	i = 0;
    if (n < 10)
	{
		i += ft_putchar(n + 48);
	}
	else if (n > 9)
	{
		i += ft_unsigned(n / 10);
		i += ft_putchar((n % 10) +48) ;
	}
    return (i);
}

int ft_putnbr(int n)
{
    int i ;

	i = 0;
	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		i += 11;
	}
	else if (n < 0)
	{
		n = n * (-1);
		i += ft_putchar('-');
		i += ft_putnbr(n);
	}
	else if (n < 10)
	{
		i += ft_putchar(n + 48);
	}
	else if (n > 9)
	{
		i += ft_putnbr(n / 10);
		i += ft_putchar((n % 10) +48);
	}
    return(i);
}