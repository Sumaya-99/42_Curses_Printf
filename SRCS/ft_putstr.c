/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:49:57 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/15 12:21:43 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	counter;
	int	a;

	counter = 0;
	a = 0;
	if (s == NULL)
	{
		write (1, "(null)", 6);
		counter += 6;
	}
	else
	{
		while (s[a] != '\0')
		{
			ft_putchar(s[a]);
			counter++;
			a++;
		}
	}
	return (counter);
}
