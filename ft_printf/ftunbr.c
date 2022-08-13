/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftunbr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truthe <truthe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:54:42 by truthe            #+#    #+#             */
/*   Updated: 2021/10/31 14:02:13 by truthe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ftunbr(unsigned int n, int *i)
{
	if (n >= 0 && n < 10)
	{
		ft_putchar(n + '0', i);
		i++;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10, i);
		ft_putnbr(n % 10, i);
	}
}