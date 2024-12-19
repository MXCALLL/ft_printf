/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:36:55 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/19 16:58:06 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *s);
int		ft_putdigit(int n);
int		ft_putdecimal(unsigned int n);
int		ft_putbase(unsigned long n);
int		ft_puthex_up(unsigned int num);
int		ft_puthex_low(unsigned int num);

#endif