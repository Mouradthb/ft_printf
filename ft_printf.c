/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:55:00 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/17 22:48:45 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_form(va_list argptr, char c, int *count)
{
	if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(argptr, int), count);
	else if (c == 'x' || c == 'X')
		ft_puthexa(va_arg(argptr, unsigned int), c, count);
	else if (c == 'p')
		ft_putadress(va_arg(argptr, void *), count);
	else if (c == 'u')
		ft_putnbru(va_arg(argptr, unsigned int), count);
	else if (c == 's')
		ft_putstr(va_arg(argptr, char *), count);
	else if (c == 'c')
		ft_putchar(va_arg(argptr, int), count);
	else if (c == '%')
		ft_putchar(c, count);
	else
		ft_putchar(c, count);
	return (*count);
}

int	ft_printf(const char *s, ...)
{
	va_list	argptr;
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(argptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == '\0')
				break ;
			check_form(argptr, s[i + 1], &count);
			i++;
		}
		else
			ft_putchar(s[i], &count);
		i++;
	}
	va_end(argptr);
	return (count);
}

// #include <libc.h>

// int main ()
// {
// 	// fclose(stdout);
// 	// dprintf(2,"%d",ft_printf("hello"));
// }
