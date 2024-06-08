/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:41:28 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/22 15:15:14 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// {
// 	if ((c >= 'a' && c <= 'z')
// 		|| (c >= 'A' && c <= 'Z')
// 		|| (c >= '0' && c <= '9'))
// 		return (1);
// 	return (0);
// }

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     char test_chars[] = "aA1#";

//     int expect;
//     int result;
//     int i = 0;

//     while (test_chars[i] != '\0')
// 	{
//         expect = isalnum(test_chars[i]);
//         result = ft_isalnum(test_chars[i]);

//         printf("Character '%c':\n", test_chars[i]);
//         printf("Expect: %d\n", expect);
//         printf("Result: %d\n", result);
//         printf("\n");
//         i++;
//     }
//     return (0);
// }
