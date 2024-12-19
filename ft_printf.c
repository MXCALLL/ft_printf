/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:34:37 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/19 16:52:42 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_format(char specifier, va_list arg)
{
	int count;

	count = 0;
	if (specifier == 'c')
		count += ft_putchar(va_arg(arg, int));
	else if (specifier == 's')
		count += ft_putstr(va_arg(arg, char *));
	else if (specifier == 'd' || specifier == 'i')
		count += ft_putdigit(va_arg(arg, int));
	else if (specifier == 'u')
		count += ft_putdecimal(va_arg(arg, unsigned int));
	else if (specifier == 'p')
		count += ft_putbase(va_arg(arg, unsigned long));
	else if (specifier == 'x')
		count += ft_puthex_low(va_arg(arg, unsigned int));
	else if (specifier == 'X')
		count += ft_puthex_up(va_arg(arg, unsigned int));
	return (count);
}

int ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	arg;
	va_start (arg,format);

	i = 0;
	count = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	while (format[i])
	{
		if (format[i] != '%')
			count += ft_putchar(format[i]);
		if (format[i] == '%' && format[i + 1] == '%')
		{
			count += ft_putchar('%');
			i++;
		}
		else if (format[i] == '%' && format[i + 1])
			count += ft_format(format[(i++) + 1], arg);
		i++;
	}
	return (va_end(arg),count);
}
