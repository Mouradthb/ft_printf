/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:09:06 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/17 16:07:19 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthexa(unsigned int n, char c, int *count)
{
	char	*hexa;

	if (c == 'X')
		hexa = "0123456789ABCDEF";
	else
		hexa = "0123456789abcdef";
	if (n >= 16)
	{
		ft_puthexa(n / 16, c, count);
		ft_puthexa((n % 16), c, count);
	}
	else
		ft_putchar(hexa[n], count);
}
