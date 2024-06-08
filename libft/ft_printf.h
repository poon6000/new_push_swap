/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 12:10:37 by nsangnga          #+#    #+#             */
/*   Updated: 2024/02/21 18:53:24 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"
# define BASE_10 "0123456789"

# include <stdarg.h>
# include <unistd.h>

typedef struct s_memo
{
	int				total_print;
	int				len;
	int				res;
	int				result;
}	t_memo;

int			ft_printf(const char *format, ...);
int			ft_putchar(int c);
int			ft_putstr(char *str);
int			ft_putptr(unsigned long long ptr);
int			ft_putint(int n);
int			ft_putu(unsigned int n);
int			ft_putx(unsigned int n);
int			ft_put_upperx(unsigned int n);
int			ft_put_hex(unsigned long long num, const char *base);
int			ft_put_hexx(unsigned long long num, \
			const char *base, int *printed_len);
int			ft_putnbr_rec(int n, int *len);
int			ft_putnbr_recu(unsigned int n, int *len);
int			ft_process_format(va_list *args, char specifier);
#endif
