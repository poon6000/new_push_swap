/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:43:36 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/24 17:10:18 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Converts 's1' and 's2' to unsigned char pointers.
** - Compares the first 'n' bytes of 's1' and 's2'.
** - Returns the difference between s1 and s2.
** - If both memory blocks are identical, returns 0.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     char str1[] = "Hello, World!";
//     char str2[] = "Hello, World!";
//     char str3[] = "Hello, OpenAI!";
//     printf("memcmp = %d\n", memcmp(str1, str2, 13));
//     printf("ft_memcmp = %d\n", ft_memcmp(str1, str2, 13));
//     printf("memcmp = %d\n", memcmp(str1, str3, 13));
//     printf("ft_memcmp = %d\n", ft_memcmp(str1, str3, 13));
//     printf("memcmp = %d\n", memcmp(str1, str3, 5));
//     printf("ft_memcmp= %d\n", ft_memcmp(str1, str3, 5));
//     return 0;
// }
