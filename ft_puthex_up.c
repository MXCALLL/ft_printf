/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 20:03:09 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/19 13:38:03 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_up(unsigned int num)
{
	int		count;
	char	*base;

	base = "0123456789ABCDEF";
	count = 0;
	if (num >= 16)
		count += ft_puthex_up(num / 16);
	count += write(1, &base[num % 16], 1);
	return (count);
}
