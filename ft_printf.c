/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:49:11 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/15 12:06:12 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	diff_cases_1(const char *type, va_list arg, int *index, int counter)
{
	if (type[*index - 1] == '%' && type[*index] == 'c')
	{
		counter += ft_putchar(va_arg(arg, int));
		(*index)++;
	}
	else if (type[*index -1] == '%' && type[*index] == 's')
	{
		counter += ft_putstr(va_arg(arg, char *));
		(*index)++;
	}
	else if (type[*index - 1] == '%' && (type[*index] == 'd'
			|| type[*index] == 'i'))
	{
		counter = ft_putnbr(va_arg(arg, int), counter);
		(*index)++;
	}
	return (counter);
}

int	diff_cases_2(const char *type, va_list arg, int *index, int counter)
{
	if (type[*index - 1] == '%' && type[*index] == 'u')
	{
		counter = ft_putunbr(va_arg(arg, unsigned int), counter);
		(*index)++;
	}
	else if (type[*index - 1] == '%' && type[*index] == 'p')
	{
		counter = ft_pointer(va_arg(arg, void *), counter);
		(*index)++;
	}
	else if (type[*index - 1] == '%' && type[*index] == 'x')
	{
		counter = ft_hex(va_arg(arg, unsigned int), counter);
		(*index)++;
	}
	else if (type[*index - 1] == '%' && type[*index] == 'X')
	{
		counter = ft_hex_u(va_arg(arg, unsigned int), counter);
		(*index)++;
	}
	return (counter);
}

int	percenatge_case(const char *type, int *index, int counter)
{
	if (type[*index - 1] == '%' && type[*index] == '%')
	{
		counter += ft_putchar(type[*index]);
		(*index)++;
	}
	return (counter);
}

int	non_percent_case(const char *type, int *index, int counter)
{
	while (type[*index] != '%' && type[*index] != '\0')
	{
		counter += ft_putchar(type[*index]);
		(*index)++;
	}
	return (counter);
}

int	ft_printf(const char *type, ...)
{
	va_list	arg;
	int		index;
	int		counter;

	index = 0;
	counter = 0;
	va_start (arg, type);
	while (type[index])
	{
		if (type[index] != '%' )
			counter = non_percent_case(type, &index, counter);
		else if (type[index++] == '%' && type[index] == '%')
			counter = percenatge_case(type, &index, counter);
		else if (type[index - 1] == '%' && (type[index] == 'c'
				|| type[index] == 's' || type[index] == 'd'
				|| type[index] == 'i'))
			counter = diff_cases_1(type, arg, &index, counter);
		else if (type[index - 1] == '%' && (type[index] == 'u'
				|| type[index] == 'p' || type[index] == 'x'
				|| type[index] == 'X'))
			counter = diff_cases_2(type, arg, &index, counter);
	}
	va_end (arg);
	return (counter);
}
