/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:40:56 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/22 14:37:23 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
How it works:

Use a pointer 'ptr' to start at the beginning of 's'.
Go through 'n' characters and set each one to 0.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n--)
		*ptr++ = 0;
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str1[] = "This is a test string.";
// 	char	str2[] = "This is a test string.";

// 	bzero(str2 + 9, 1);
// 	ft_bzero(str1 + 8, 4);
// 	printf("Expect: %s\n", str2);
// 	printf("Result: %s\n", str1);
// 	return (0);
// }
