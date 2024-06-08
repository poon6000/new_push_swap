/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:41:50 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/23 09:21:15 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// {
// 	if (c >= 0 && c <= 127)
// 		return (1);
// 	else
// 		return (0);
// }

// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     int test_chars[] = { 'A', 'z', '0', 128, -1, 127, 0 };
//     int num_tests = sizeof(test_chars) / sizeof(test_chars[0]);
//     int i = 0;

//     while (i < num_tests) 
// 	{
//         int c = test_chars[i];
//         printf("Character: %c (%d), %d\n", c, c, ft_isascii(c));
//         i++;
//     }

//     return 0;
// }
