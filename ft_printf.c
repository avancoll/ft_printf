/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:46:18 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/12 17:46:47 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *str, ...)
{
	va_list			ap;
	unsigned int	i;

	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		while (str[i] != '%')
		{
			ft_putchar(str[i]);
			i++;
		}
		if (str[i] == '%')
		{
			i++;
			ft_check_conversion(ap, str[i]);
		}
		i++;
	}
	va_end(ap);
	return (0);
}

#include <stdio.h>
int	main(void)
{
	int	a = 5;
	ft_printf("%d", a);
}
