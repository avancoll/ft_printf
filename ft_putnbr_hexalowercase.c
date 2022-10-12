/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexalowercase.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:42:42 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/12 16:56:35 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_hexalowercase(unsigned int n)
{
	if (n / 16)
		ft_putnbr_hexalowercase(n / 16);
	n = n % 16;
	if (n >= 10)
	{
		n = n + 87;
		write(1, &n, 1);
	}
	else
	{
		n = n + 48;
		write(1, &n, 1);
	}
}
