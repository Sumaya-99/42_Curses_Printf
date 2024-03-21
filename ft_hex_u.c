/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:58:39 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/15 11:12:30 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_u(unsigned int n, int counter)
{
	if (n <= 9)
	{
		ft_putchar(n + '0');
		return (counter + 1);
	}
	else if (n >= 10 && n <= 15)
	{
		ft_putchar(n - 10 + 'A');
		return (counter + 1);
	}
	else
	{
		counter = ft_hex_u(n / 16, counter);
		return (ft_hex_u(n % 16, counter));
	}
	return (counter);
}
