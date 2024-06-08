/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:43:52 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/21 14:03:11 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_memmove is used to copy len bytes from src to dst. It handles 
overlapping memory regions, ensuring data isn't corrupted during the copy.

How it works:

Safety First: If both dst and src are NULL, return NULL.

1. Direction Check: Determine if the source is ahead of the destination 
 in memory. If it is, copying should be done from the end 
 to avoid overwriting data.
2. Set Pointers with Casting: Initialize pointers by casting dst
 and src to unsigned char pointers for byte-by-byte operations.
3. Copy: Depending on the direction determined, 
copy bytes either from the start or from the end.
4. Finish: Return the original dst pointer.
*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_ptr;
	const unsigned char	*src_ptr;

	if (!dst && !src)
		return (NULL);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (const unsigned char *)src;
	if (src_ptr < dst_ptr)
	{
		while (len--)
			dst_ptr[len] = src_ptr[len];
	}
	else
	{
		ft_memcpy(dst_ptr, src_ptr, len);
	}
	return (dst);
}

// {
// 	unsigned char		*dst_ptr;
// 	const unsigned char	*src_ptr;

// 	if (!dst && !src)
// 		return (NULL);
// 	dst_ptr = (unsigned char *)dst;
// 	src_ptr = (const unsigned char *)src;
// 	if (src_ptr < dst_ptr)
// 	{
// 		while (len--)
// 			dst_ptr[len] = src_ptr[len];
// 	}
// 	else
// 	{
// 		ft_memcpy(dst_ptr, src_ptr, len);
// 	}
// 	return (dst);
// }
// #include <stdio.h>
// #include <string.h>

// void	*ft_memmove(void *dst, const void *src, size_t len);

// int	main(void)
// {
// 	char str1[] = "abcdef";
// 	char str2[] = "abcdef";

// 	printf("Original: %s\n", str1);

// 	ft_memmove(str1 + 2, str1, 4);
// 	memmove(str2 + 2, str2, 4);

// 	printf("After ft_memmove: %s\n", str1);
// 	printf("After memmove:    %s\n", str2);

// 	return (0);
// }
