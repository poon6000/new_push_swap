/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:45:15 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/08 17:49:01 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_strlcpy Function Explanation:

What is this function used for?
ft_strlcpy copies up to dstsize - 1 characters from the string src to dst,
 NUL-terminating the result if dstsize is not 0.

How it works:
1. Length Calculation: Calculate the length of src.
2. Safety Check: If dstsize is 0, return the length of src.
3. Copy: Copy characters from src to dst until dstsize - 1 or
 the end of src is reached.
4. NUL Termination: Ensure dst is NUL-terminated.
5. Finish: Return the length of src.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(src);
	if (!dstsize)
		return (len);
	while (dstsize - 1 && *src)
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (len);
}
// {
// 	size_t	i;
// 	size_t	src_len;

// 	i = 0;
// 	src_len = ft_strlen(src);
// 	if (!dstsize)
// 		return (src_len);
// 	while (i < dstsize - 1 && src[i])
// 	{
// 		dst[i] = src[i];
// 		i++;
// 	}
// 	dst[i] = 0;
// 	return (src_len);
// }

// #include <stdio.h>
// #include <string.h>

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

// int	main(void)
// {
// 	char dst1[20] = "hello world";
// 	char dst2[20] = "hello world";
// 	char src[20] = "HELLO123456";

// 	printf("Original: %s\n", dst1);

// 	printf("strlcpy: %zu, string: %s\n", strlcpy(dst1, src, 8), dst1);
// 	printf("ft_strlcpy: %zu, string: %s\n", ft_strlcpy(dst2, src, 8), dst2);

// 	return (0);
// }
