/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:49:15 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/18 11:40:57 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

void	ft_print_decimal(unsigned int n)
{
	char	c;

	if (n == 4294967295)
	{
		write(1, "4294967295", 11);
		return ;
	}
	if (n >= 10)
		ft_print_decimal(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}
