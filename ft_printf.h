/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mthabit <mthabit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:27:48 by mthabit           #+#    #+#             */
/*   Updated: 2022/11/15 18:42:40 by mthabit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *count);
int		ft_putnbr(int n, int *count);
void	ft_putstr(char *s, int *count);
int		ft_putnbru(int n, int *count);
int		ft_puthexa(unsigned int n, char c, int *count);
int		ft_putadress(unsigned int n, int *count);

#endif
