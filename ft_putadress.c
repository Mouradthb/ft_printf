/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:29:03 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/17 22:17:59 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putx(unsigned long n, int *count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n >= 16)
	{
		ft_putx(n / 16, count);
		ft_putx((n % 16), count);
	}
	else
		ft_putchar(hexa[n], count);
}

void	ft_putadress(void *n, int *count)
{
	ft_putstr("0x", count);
	ft_putx((unsigned long) n, count);
}
