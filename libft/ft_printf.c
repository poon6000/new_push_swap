/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:10:40 by nsangnga          #+#    #+#             */
/*   Updated: 2024/02/21 19:01:41 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	if (write(1, &c, 1) != 1)
		return (-1);
	return (1);
}

int	ft_putstr(char *str)
{
	int		i;

	i = 0;
	if (str == NULL)
		str = "(null)";
	while (str[i])
	{
		if (ft_putchar(str[i]) == -1)
			return (-1);
		i++;
	}
	return (i);
}

int	ft_check(va_list *args, char format)
{
	t_memo	memo;

	memo.len = 0;
	if (format == 'c')
		memo.res = (ft_putchar(va_arg(*args, int)));
	else if (format == 's')
		memo.res = (ft_putstr(va_arg(*args, char *)));
	else if (format == 'p')
		memo.res = (ft_putptr(va_arg(*args, unsigned long long)));
	else if (format == 'd' || format == 'i')
		memo.res = (ft_putint(va_arg(*args, int)));
	else if (format == 'u')
		memo.res = (ft_putu(va_arg(*args, unsigned int)));
	else if (format == 'x')
		memo.res = (ft_putx(va_arg(*args, unsigned int)));
	else if (format == 'X')
		memo.res = (ft_put_upperx(va_arg(*args, unsigned int)));
	else if (format == '%')
		memo.res = (write(1, "%", 1));
	if (memo.res == -1)
		return (-1);
	memo.len += memo.res;
	return (memo.len);
}

int	ft_process_format(va_list *args, char format)
{
	int	result;

	result = ft_check(args, format);
	if (result == -1)
		return (-1);
	return (result);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	t_memo	memo;

	memo.total_print = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			memo.result = ft_process_format(&args, *format);
		}
		else
			memo.result = ft_putchar(*format);
		if (memo.result == -1)
		{
			va_end(args);
			return (-1);
		}
		memo.total_print += memo.result;
		format++;
	}
	va_end(args);
	return (memo.total_print);
}
