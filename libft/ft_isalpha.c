/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:41:38 by nsangnga          #+#    #+#             */
/*   Updated: 2024/07/06 14:12:37 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
// {
// 	if ((c >= 'a' && c <= 'z')
// 		|| (c >= 'A' && c <= 'Z'))
// 		return (1);
// 	return (0);
// }

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     char test_chars[] = "aA1 #";

//     int expect;
//     int result;
//     int i = 0;

//     while (test_chars[i] != '\0')
// 	{
//         expect = isalpha(test_chars[i]);
//         result = ft_isalpha(test_chars[i]);

//         printf("Character '%c':\n", test_chars[i]);
//         printf("Expect: %d\n", expect);
//         printf("Result: %d\n", result);
//         printf("\n");
//         i++;
//     }
//     return (0);
// }
