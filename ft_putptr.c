/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:35:54 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/14 11:31:00 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_convert_hexa(unsigned long n, int res)
{
	if (n / 16)
		res = ft_convert_hexa(n / 16, res);
	n = n % 16;
	if (n >= 10)
	{
		n = n + 87;
		write(1, &n, 1);
		res++;
	}
	else
	{
		n = n + 48;
		write(1, &n, 1);
		res++;
	}
	return (res);
}

int	ft_putptr(void	*p, int res)
{
	write(1, "0x", 2);
	res = res + 2;
	return (ft_convert_hexa((unsigned long)p, res));
}
