/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:34:37 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/18 00:18:44 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_format(char specifier, va_list arg)
{
	if (specifier == 's')
		ft_print_string(va_arg(arg, char *));
	else if (specifier == 'c')
		ft_putchar(va_arg(arg, int));
}

int ft_printf(const char *format, ...)
{
	char	specifier;
	va_list arg;
	va_start(arg,format);
	int i = 0;

	while(format[i])
	{
		if (format[i] != '%')
			ft_putchar(format[i]);
		if (format[i] == '%')
		{
			if (format[i+1] == '%')
			{
				ft_putchar('%');
				i++;
			}
			else if (format[i+1])
			{
				ft_format(format[i+1], arg);
				i++;
			}
		}
		i++;
	}

	va_end(arg);
}
