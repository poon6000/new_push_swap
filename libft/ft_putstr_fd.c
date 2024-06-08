/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:44:31 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/23 13:12:39 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Purpose: Write a string to a specified file descriptor.
** Inputs:
-'char *s': The string to be written.
-'int fd': The file descriptor where the string is sent.
**Operation:
-If the string s is NULL (not provided), stop.
-If the string s is provided, write it to the specified file descriptor fd.
-Use the ft_strlen(s) function to determine the length of
 the string to know how many bytes to write.
**Usage: Send a string to various destinations 
(screen, file, socket) using the given file descriptor.
*/
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write (fd, s, ft_strlen(s));
}

// #include <fcntl.h>

// int main(void)
// {
// 	int	fd;

// 	fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
// 	ft_putstr_fd("Hello, World!\n", fd);
// 	close(fd);
// 	return (0);
// }
