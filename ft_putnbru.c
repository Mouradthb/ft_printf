/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbru.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:53:36 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/15 18:46:21 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbru(unsigned int n, int *count)
{
	if (n >= 10)
	{
		ft_putnbru(n / 10, count);
		ft_putchar((n % 10) + 48, count);
	}
	else
		ft_putchar(n + 48, count);
}
