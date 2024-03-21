/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:53:36 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/15 10:58:57 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n, int counter)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
		return (counter + 11);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		counter++;
		return (ft_putnbr(-n, counter));
	}
	else if (n >= 0 && n <= 9)
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
