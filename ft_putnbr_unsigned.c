/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:25:29 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/12 15:42:24 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_unsigned(unsigned int n)
{
	int	a;

	{
		if (n < 0)
		{
			write(1, "-", 1);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_unsigned(n / 10);
			n = n % 10;
		}
		if (n < 10)
		{
			a = n + '0';
			write(1, &a, 1);
		}
	}

}
