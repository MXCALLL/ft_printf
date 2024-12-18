/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_low.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:06:22 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/18 19:19:17 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_puthex_low(unsigned int num)
{
	char base[16] = "0123456789abcdef";

	if (num >= 16)
		ft_puthex_low(num / 16);
	write(1, &base[num % 16], 1);
}
