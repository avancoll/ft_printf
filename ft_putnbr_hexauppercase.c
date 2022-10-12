/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexauppercase.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:45:11 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/12 16:57:49 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_hexauppercase(unsigned int n)
{
	if (n / 16)
		ft_putnbr_hexauppercase(n / 16);
	n = n % 16;
	if (n >= 10)
	{
		n = n + 55;
		write(1, &n, 1);
	}
	else
	{
		n = n + 48;
		write(1, &n, 1);
	}
}
