/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:25:29 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/13 13:35:24 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, int res)
{
	int	a;

	{
		if (n >= 10)
		{
			res = ft_putnbr_unsigned(n / 10, res);
			n = n % 10;
		}
		if (n < 10)
		{
			a = n + '0';
			write(1, &a, 1);
			res++;
		}
	}
	return (res);
}
