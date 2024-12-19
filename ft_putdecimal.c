/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:49:15 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/19 12:58:16 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdecimal(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n >= 10)
		count += ft_putdecimal(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}
// int main()
// {
// 	int i = ft_putdecimal(1337);
// 	printf("%d",i);
// }