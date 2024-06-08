/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:43:30 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/23 11:24:08 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Converts 's' and 'c' to unsigned char pointers and values.
** - Searches the first 'n' bytes of 's' for the character 'c'.
** - Returns a pointer to the first occurrence of 'c', if found.
** - Otherwise, returns NULL.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		ch;

	ptr = (const unsigned char *)s;
	ch = (unsigned char)c;
	while (n--)
	{
		if (*ptr == ch)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
//     char str[] = "Hello, World!";
//     char ch1 = 'W';
//     char ch2 = 'z';

//     printf("memchr(str, ch1, 13) = %p\n", memchr(str, ch1, 13));
//     printf("ft_memchr(str, ch1, 13) = %p\n", ft_memchr(str, ch1, 13));

//     printf("memchr(str, ch2, 13) = %p\n", memchr(str, ch2, 13));
//     printf("ft_memchr(str, ch2, 13) = %p\n", ft_memchr(str, ch2, 13));

//     return 0;
// }
