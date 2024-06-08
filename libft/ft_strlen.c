/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:45:22 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/08 15:17:49 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
How it works:

Start with Zero: 	We initialize a count (len) to zero.
Count Characters: 	As *s (pointer s) moves through each character in 
					the string, we add one to len.
End Result: 		When we've gone through the entire string, 
					we return the value of len.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*str;
// 	size_t	len_ft;
// 	size_t	len_std;

// 	str = "Hello, World!";
// 	len_ft = ft_strlen(str);
// 	len_std = strlen(str);
// 	printf("ft_strlen: %zu\n", len_ft);
// 	printf("strlen:    %zu\n", len_std);
// 	return (0);
// }
