/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhelal <suhelal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:14:28 by suhelal           #+#    #+#             */
/*   Updated: 2024/01/15 11:14:51 by suhelal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(void *p, int counter)
{
	ft_putstr("0x");
	counter += 2;
	counter = ft_hex((uintptr_t)p, counter);
	return (counter);
}
