/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:36:55 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/18 19:18:53 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
#include <string.h> // to remove
#include <stdio.h> // to remove

int		ft_printf(const char *format, ...);
void	ft_print_char(char c);
void	ft_print_string(char *s);
void	ft_print_digit(int n);
void	ft_print_decimal(unsigned int n);
void	ft_putbase(int n);
void	ft_puthex_up(unsigned int num);
void	ft_puthex_low(unsigned int num);

#endif