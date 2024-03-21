/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 10:40:03 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/15 12:18:32 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>

int	ft_hex_u(unsigned int n, int counter);

int	ft_hex(unsigned long n, int counter);

int	ft_pointer(void *p, int counter);

int	ft_printf(const char *type, ...);

int	ft_putchar(char c);

int	ft_putnbr(int n, int counter);

int	ft_putstr(char *s);

int	ft_putunbr(unsigned int n, int counter);

#endif
