/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:44:26 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/22 22:35:19 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// int main(void)
// {
//     int num1 = 12345;
//     int num2 = -9876;
//     int num3 = 0;

//     ft_putnbr_fd(num1, 1); // Print positive number
//     ft_putchar_fd('\n', 1);

//     ft_putnbr_fd(num2, 1); // Print negative number
//     ft_putchar_fd('\n', 1);

//     ft_putnbr_fd(num3, 1); // Print zero
//     ft_putchar_fd('\n', 1);

//     return (0);
// }
