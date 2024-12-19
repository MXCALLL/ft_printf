/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:08:01 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/19 17:02:58 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	recursive(unsigned long n)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += recursive(n / 16);
	count += write(1, &base[n % 16], 1);
	return (count);
}

int	ft_putbase(unsigned long n)
{
	int		count;

	count = 0;
	write(1, "0x", 2);
	count += recursive(n);
	return (count + 2);
}
