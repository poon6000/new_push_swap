/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:44:13 by nsangnga          #+#    #+#             */
/*   Updated: 2024/05/01 15:08:42 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Purpose: Write a string followed by a newline to a specified file descriptor.

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

// int	main(void)
// {
// 	ft_putendl_fd("This is a test string.", 1);
// 	return (0);
// }
