/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:46:18 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/14 11:31:38 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list			ap;
	unsigned int	res;
	unsigned int	i;

	va_start(ap, str);
	res = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] != '%' && str[i])
			res = ft_putchar(str[i++], res);
		if (str[i] == '%' && str[++i])
			res = ft_check_conversion(ap, str[i++], res);
	}
	va_end(ap);
	return (res);
}
