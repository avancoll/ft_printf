/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_conversion.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:56:03 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/12 15:42:23 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_check_conversion(va_list ap, char c)
{
	if (c == 'c')
		ft_putchar(va_arg(ap, char));
	else if(c == 's')
		ft_putstr(va_arg(ap, char *));
	else if (c == 'p')
		ft_putptr(va_arg(ap, void *));
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		ft_putnbr_unsigned(va_arg(ap, unsigned int));
	else if (c == 'x')
		ft_putnbr_hexalowercase(va_arg(ap, char *));
	else if (c == 'X')
		ft_putnbr_hexauppercase(va_arg(ap, char *));
	else if (c == '%')
		ft_putchar('%');
}
