/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:29:03 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/15 18:41:40 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthexa(unsigned int n, int *count)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (n > 16)
	{
		ft_puthexa(n / 16, count);
		ft_puthexa((n % 16), count);
	}
	else
		ft_putchar(hexa[n], count);
}

int	ft_putadress(unsigned int n, int *count)
{
	ft_putstr("0x", count);
	ft_puthexa(n, count);
}
