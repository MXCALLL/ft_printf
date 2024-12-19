/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:06:22 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/19 15:12:42 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_low(unsigned int num)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (num >= 16)
		count += ft_puthex_low(num / 16);
	count += write(1, &base[num % 16], 1);
	return (count);
}
