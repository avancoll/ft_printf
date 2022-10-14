/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:07:22 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/14 12:04:59 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int res)
{
	unsigned int	i;

	if (!s)
	{
		write(1, "(null)", 6);
		return (res + 6);
	}
	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		res++;
		i++;
	}
	return (res);
}
