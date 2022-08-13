/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truthe <truthe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:54:42 by truthe            #+#    #+#             */
/*   Updated: 2021/10/31 14:21:13 by truthe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	pip(const char *st, va_list ap, int *i)
{
	if (*st == 'c')
		ft_putchar(va_arg(ap, int), i);
	else if (*st == 's')
		ft_putstr(va_arg(ap, char *), i);
	else if (*st == 'p')
	{
		ft_putstr("0x", i);
		ft_16x(va_arg(ap, unsigned long), i);
	}
	else if (*st == 'd' || *st == 'i')
		ft_putnbr(va_arg(ap, int), i);
	else if (*st == 'u')
		ftunbr(va_arg(ap, unsigned int), i);
	else if (*st == 'x')
		ft_16x(va_arg(ap, unsigned int), i);
	else if (*st == 'X')
		ft_16xxx(va_arg(ap, unsigned int), i);
	else if (*st == '%')
		ft_putchar('%', i);
	else
	{
		write (1, st, 1);
		i++;
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str != '%')
		{
			write(1, str, 1);
			str++;
			i++;
		}
		if (*str == '%')
		{
			pip(++str, ap, &i);
			str++;
		}
	}
	va_end(ap);
	return (i);
}
