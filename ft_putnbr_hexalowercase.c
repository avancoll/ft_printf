/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexalowercase.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:42:42 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/13 13:30:52 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexalowercase(unsigned int n, int res)
{
	if (n / 16)
		res = ft_putnbr_hexalowercase(n / 16, res);
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
