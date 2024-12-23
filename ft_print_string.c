/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:39:00 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/17 23:06:33 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string(char *s)
{
	size_t		i;

	if (!s)
		return ;
	i = 0;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
