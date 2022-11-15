/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:55:00 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/15 20:46:55 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_form(const char c, va_list va, int count)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(va, int), count);
	else if (c == 'x' || c == 'X')
		ft_puthexa(va_arg(va, unsigned int), c, count);
	else if (c == 'p')
		ft_putadress(va_arg(va, void *), count);
	else if (c == 'u')
		ft_putnbru(va_arg(va, unsigned int), count);
	else if (c == 's')
		ft_putstr(va_arg(va, char), count);
	else if (c == 'c')
		ft_putchar(va_arg(va, char), count);
	else
		ft_putchar(c, count);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	va;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(va, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '\0')
				break ;
			check_form(s[i + 1], va, &count);
			i++;
		}
		else
			ft_putchar(s[i], &count);
		i++;
	}
	va_end(va);
	return (count);
}