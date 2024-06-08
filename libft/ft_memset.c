/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:43:59 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/08 15:32:27 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
How it works:

Initialization:  We start with a pointer 'ptr' that points to 'b'.
Setting Bytes:  For 'len' times, we set the byte at 'ptr' to 'c' and 
				then move to the next byte.
Return Memory:  After setting all bytes, we return the original pointer 's'.
*/

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
		*ptr++ = (unsigned char)c;
	return (b);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str1[20];
// 	char str2[20];
// 	int c = 'A';
// 	size_t len = 10;

// 	// Using ft_memset
// 	ft_memset(str1, c, len);

// 	// Using memset from the standard library
// 	memset(str2, c, len);

// 	printf("Expected result (memset): %s\n", str2);
// 	printf("User result (ft_memset): %s\n", str1);

// 	return (0);
// }
