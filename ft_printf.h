/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:46:23 by avancoll          #+#    #+#             */
/*   Updated: 2022/10/14 11:30:48 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c, int res);
int	ft_putstr(char *s, int res);
int	ft_putnbr(int n, int res);
int	ft_putnbr_unsigned(unsigned int n, int res);
int	ft_putnbr_hexalowercase(unsigned int n, int res);
int	ft_putnbr_hexauppercase(unsigned int n, int res);
int	ft_putptr(void *p, int res);
int	ft_check_conversion(va_list ap, char c, int res);

#endif
