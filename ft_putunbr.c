/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:56:03 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/15 12:22:11 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n, int counter)
{
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + '0');
		return (counter + 1);
	}
	else
	{
		counter = ft_putnbr(n / 10, counter);
		return (ft_putnbr(n % 10, counter));
	}
	return (counter);
}
