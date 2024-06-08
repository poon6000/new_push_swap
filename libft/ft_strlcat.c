/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:40:10 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/23 10:52:15 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strlcat Function Explanation:
**
** What it does:
	The `ft_strlcat` function appends the `src` string to the end of the 
	`dst` string. It ensures that no more than `dst_size - strlen(dst) - 1` 
	characters are appended, and the result is null-terminated. If the 
	destination buffer is too small, it returns the potential length the 
	result string would have had without truncation. If `dst_size` is less 
	than the length of `dst`, the function returns the length of `src` plus 
	`dst_size`.
**
** How code works:
**   - Calculates the length of the source string (`src`).
**   - Calculates the length of the destination string (`dst`).
**   - Checks if the destination buffer size is less than or equal to 
**     its current length. If so, returns the sum of the source length 
**     and the buffer size.
**   - Sets pointers to the end of the destination string and the 
**     beginning of the source string.
**   - Appends characters from `src` to `dst` until the end of the 
**     destination buffer is reached or the source string ends.
**   - Null-terminates the dest string.
**   - Returns the total length of the concatenated string.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (!dst_size)
		return (src_len);
	if (dst_size <= dst_len)
		return (src_len + dst_size);
	while (*dst && dst_size--)
		dst++;
	while (*src && --dst_size)
		*dst++ = *src++;
	*dst = '\0';
	return (dst_len + src_len);
}

// {
// 	size_t	dst_len;
// 	size_t	src_len;
// 	size_t	i;

// 	dst_len = ft_strlen(dst);
// 	src_len = ft_strlen(src);
// 	if (!dst && !dst_size)
// 		return (src_len);
// 	if (dst_size <= dst_len)
// 		return (src_len + dst_size);
// 	i = 0;
// 	while (dst_len + i < dst_size - 1 && src[i])
// 	{
// 		dst[dst_len + i] = src[i];
// 		i++;
// 	}
// 	dst[dst_len + i] = 0;
// 	return (dst_len + src_len);
// }

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst1[20] = "Hello";
	char dst2[20] = "Hello";
	char src[] = " World";

	printf("Original: %s\n", dst1);
	printf("Expt: %zu, string: %s\n", strlcat\
	(dst1, src, sizeof(dst1)), dst1);
	printf("Retsult: %zu, string: %s\n", ft_strlcat\
	(dst2, src, sizeof(dst2)), dst2);
	return (0);
}
*/
