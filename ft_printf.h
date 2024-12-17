/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muidbell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:36:55 by muidbell          #+#    #+#             */
/*   Updated: 2024/12/17 23:06:46 by muidbell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
#include <string.h>

int		ft_printf(const char *format, ...);
char	*ft_strrchr(const char *s, int c);
void	ft_putchar(char c);
size_t	ft_strlen(const char *s);
void	ft_print_string(char *s);

#endif