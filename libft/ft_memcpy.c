/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:43:43 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/21 12:01:12 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
How it works:

1. Safety First: If either dst or src is NULL, return NULL to prevent 
potential issues.
2. Set Pointers with Casting:	Initialize ptr_dst and ptr_src by casting
dst and src to unsigned char pointers. This ensures we're workingbyte by byte.
3. Copy:	For n times, copy bytes from src to dst.
4. Finish:	Return the original dst pointer.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	if (!dst && !src)
		return (NULL);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	while (n--)
		*dst_ptr++ = *src_ptr++;
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// void	*ft_memcpy(void *dst, const void *src, size_t n);

// int	main(void)
// {
// 	char src[] = "This is the source string.";
// 	char dst1[30];
// 	char dst2[30];

// 	memcpy(dst2, src, 25);
// 	ft_memcpy(dst1, src, 25);

// 	printf("memcpy:    %s\n", dst2);
// 	printf("ft_memcpy: %s\n", dst1);

// 	return (0);
// }
