/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:40:48 by nsangnga          #+#    #+#             */
/*   Updated: 2024/05/04 17:46:01 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
ft_atoi Function Explanation:

What it does:
- Converts a string to an integer.
This function converts a string to an integer while handling spaces, signs, 
and digits.

How it works:
1. Skip Whitespace:
   - Start at the beginning of the string.
   - Move past any leading whitespace (spaces, tabs, newlines, etc.).

2. Handle Sign:
   - Detect a sign character ('-' or '+').
   - Set the sign of the result (positive or negative).
   - Move past the sign character if present.

3. Convert to Integer:
   - Read and convert digits (0-9) from the string.
   - Build the integer result as you go.
		String: 1 2 3
			|           |           |
	Iteration 1:   result = 0*10 + (1-'0') = 1
	Iteration 2:   result = 1*10 + (2-'0') = 12
	Iteration 3:   result = 12*10 + (3-'0') = 123

4. Apply Sign:
   - Apply the detected sign to the result.

5. Return Result:
   - The result is the integer value of the input string after skipping 
     leading whitespace and considering the sign.


*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	result *= sign;
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
// 	printf("%d\n", atoi("5679876355475643"));
// 	printf("%d\n", ft_atoi("5679876355475643"));
// 	printf("%d\n", atoi("-5679876355475643"));
// 	printf("%d\n", ft_atoi("-5679876355475643"));
// 	printf("%d\n", atoi("-56798763554756436546456456"));
// 	printf("%d\n", ft_atoi("-56798763554756436546456456"));
// 	return (0);
// }
