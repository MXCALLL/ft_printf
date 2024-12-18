/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:34:37 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/18 19:19:45 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static void	ft_format(char specifier, va_list arg)
{
	if (specifier == 'c')
		ft_print_char(va_arg(arg, int));
	else if (specifier == 's')
		ft_print_string(va_arg(arg, char *));
	else if (specifier == 'd' || specifier == 'i')
		ft_print_digit(va_arg(arg, int));
	else if (specifier == 'u')
		ft_print_decimal(va_arg(arg, unsigned int));
	else if (specifier == 'p')
		ft_putbase(va_arg(arg, long));
	else if (specifier == 'x')
		ft_puthex_low(va_arg(arg, unsigned int));
	else if (specifier == 'X')
		ft_puthex_up(va_arg(arg, unsigned int));
}

int ft_printf(const char *format, ...)
{
	char	specifier;
	int		i;
	va_list arg;
	va_start(arg,format);

	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
			ft_print_char(format[i]);
		if (format[i] == '%' && format[i+1] == '%')
		{
			ft_print_char('%');
			i++;
		}
		else if (format[i] == '%' && format[i+1])
		{
			ft_format(format[i+1], arg);
			i++;
		}
		i++;
	}
	va_end(arg);
}
