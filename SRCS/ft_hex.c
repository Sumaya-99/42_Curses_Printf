/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:58:06 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/15 11:14:07 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned long n, int counter)
{
	if (n <= 9)
	{
		ft_putchar(n + '0');
		return (counter + 1);
	}
	else if (n >= 10 && n <= 15)
	{
		ft_putchar(n - 10 + 'a');
		return (counter + 1);
	}
	else
	{
		counter = ft_hex(n / 16, counter);
		return (ft_hex(n % 16, counter));
	}
	return (counter);
}
