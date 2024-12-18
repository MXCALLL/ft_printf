/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:08:01 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/18 17:42:04 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putbase(int n)
{
	char c;
	unsigned int num;
	static int	t;
	char base[16] = "0123456789abcdef";

	if (!t++)
		write(1,"0x",2);
	if(n < 0)
	{
		num = (unsigned int)n;
		if (num >= 16)
			ft_putbase(num / 16);
		c = base[num % 16];
	}
	else if (n >= 16)
	{
		ft_putbase(n / 16);
		c = base[n % 16];
	}
	else
		c = base[n];
	write(1, &c, 1);
}
