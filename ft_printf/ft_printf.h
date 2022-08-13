/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: truthe <truthe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 13:54:42 by truthe            #+#    #+#             */
/*   Updated: 2021/10/31 13:58:30 by truthe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *i);
void	ft_putstr(char *s, int *i);
void	ft_16x(unsigned long long n, int *i);
void	ftunbr(unsigned int n, int *i);
void	ft_putnbr(int n, int *i);
void	ft_16xxx(unsigned long long n, int *i);

#endif