/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intrauser <intrauser@student.42bangkok.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 15:26:06 by nsangnga          #+#    #+#             */
/*   Updated: 2024/02/19 16:49:23 by intrauser        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hex(unsigned long long num, const char *base)
{
	if (num >= 16)
	{
		if (ft_put_hex(num / 16, base) == -1)
			return (-1);
	}
	if (ft_putchar(base[num % 16]) == -1)
		return (-1);
	return (1);
}

int	ft_put_hexx(unsigned long long num, const char *base, int *printed_len)
{
	if (num >= 16)
	{
		if (ft_put_hexx(num / 16, base, printed_len) == -1)
			return (-1);
	}
	if (ft_putchar(base[num % 16]) == -1)
		return (-1);
	(*printed_len)++;
	return (0);
}

int	ft_putnbr_rec(int n, int *len)
{
	if (n == -2147483648)
	{
		if (ft_putstr("-2") == -1)
			return (-1);
		*len += 2;
		n = 147483648;
	}
	if (n < 0)
	{
		if (ft_putchar('-') == -1)
			return (-1);
		*len += 1;
		n = -n;
	}
	if (n > 9)
	{
		if (ft_putnbr_rec(n / 10, len) == -1)
			return (-1);
	}
	if (ft_putchar(n % 10 + '0') == -1)
		return (-1);
	*len += 1;
	return (0);
}

int	ft_putnbr_recu(unsigned int n, int *len)
{
	if (n > 9)
	{
		if (ft_putnbr_rec(n / 10, len) == -1)
			return (-1);
	}
	if (ft_putchar(n % 10 + '0') == -1)
		return (-1);
	*len += 1;
	return (0);
}
