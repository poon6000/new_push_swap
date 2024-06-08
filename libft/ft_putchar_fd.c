/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:44:08 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/23 13:22:22 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 0 1 2 in out error
Purpose: Write a character to a file descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// #include <fcntl.h>

// int	main(void)
// {
// 	int	fd;

// 	fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putchar_fd('4', fd);
// 	ft_putchar_fd('2', fd);
// 	ft_putchar_fd('\n', fd);
// 	close(fd);
// 	return (0);
// }
