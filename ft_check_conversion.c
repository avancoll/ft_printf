/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:37 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/13 16:06:15 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_conversion(va_list ap, char c, int res)
{
	if (c == 'c')
		res = ft_putchar(va_arg(ap, int), res);
	else if (c == 's')
		res = ft_putstr(va_arg(ap, char *), res);
	else if (c == 'p')
		res = ft_putptr(va_arg(ap, void *), res);
	else if (c == 'd' || c == 'i')
		res = ft_putnbr(va_arg(ap, int), res);
	else if (c == 'u')
		res = ft_putnbr_unsigned(va_arg(ap, unsigned int), res);
	else if (c == 'x')
		res = ft_putnbr_hexalowercase(va_arg(ap, unsigned int), res);
	else if (c == 'X')
		res = ft_putnbr_hexauppercase(va_arg(ap, unsigned int), res);
	else if (c == '%')
		res = ft_putchar('%', res);
	return (res);
}
