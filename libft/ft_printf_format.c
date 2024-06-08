/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 13:41:02 by nsangnga          #+#    #+#             */
/*   Updated: 2024/02/21 19:02:06 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long ptr)
{
	int	printed_len;

	printed_len = 2;
	if (ptr == 0)
		return (ft_putstr("(nil)"));
	if (ft_putchar('0') == -1 || ft_putchar('x') == -1)
		return (-1);
	if (ft_put_hexx(ptr, HEX_LOWER, &printed_len) == -1)
		return (-1);
	return (printed_len);
}

int	ft_putint(int n)
{
	int	len;

	len = 0;
	if (ft_putnbr_rec(n, &len) == -1)
		return (-1);
	return (len);
}

int	ft_putu(unsigned int n)
{
	int	len;

	len = 0;
	if (ft_putnbr_recu(n, &len) == -1)
		return (-1);
	return (len);
}

int	ft_putx(unsigned int n)
{
	int					len;
	unsigned long long	temp;

	len = 0;
	temp = n;
	if (n == 0)
		return (ft_putstr("0"));
	if (ft_put_hex(n, HEX_LOWER) == -1)
		return (-1);
	while (temp)
	{
		len++;
		temp /= 16;
	}
	return (len);
}

int	ft_put_upperx(unsigned int n)
{
	int					len;
	unsigned long long	temp;

	len = 0;
	temp = n;
	if (n == 0)
		return (ft_putstr("0"));
	if (ft_put_hex(n, HEX_UPPER) == -1)
		return (-1);
	while (temp)
	{
		len++;
		temp /= 16;
	}
	return (len);
}
