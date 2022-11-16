/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhabib-a <mhabib-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 00:59:27 by mhabib-a          #+#    #+#             */
/*   Updated: 2022/11/16 21:46:27 by mhabib-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type(va_list arg, char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(arg, int));
	else if (c == 's')
		len += ft_putstr(va_arg(arg, char *));
	else if (c == 'i' || c == 'd')
		len += ft_putnbr(va_arg(arg, int));
	else if (c == 'u')
		len += ft_unsigned(va_arg(arg, unsigned int));
	else if (c == 'X')
		len += ft_hex(va_arg(arg, unsigned int), "0123456789ABCDEF");
	else if (c == 'x')
		len += ft_hex(va_arg(arg, unsigned int), "0123456789abcdef");
	else if (c == 'p')
		len += ft_ptr(va_arg(arg, unsigned long));
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		len;
	int		i;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_type(args, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
