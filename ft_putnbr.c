/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:17:19 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/17 10:32:05 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
		ft_putstr("-2147483648", count);
	else if (n < 0)
	{
		ft_putchar('-', count);
		ft_putnbr(-n, count);
	}
	else if (n >= 10)
	{
		ft_putnbr(n / 10, count);
		ft_putchar((n % 10) + 48, count);
	}
	else
		ft_putchar(n + 48, count);
}
