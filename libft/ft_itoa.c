/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:42:17 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/22 18:15:04 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_itoa Function Explanation:

// What it does:
// - Converts an integer to its string representation. 
// This function is used to convert an integer into a string, considering its 
// sign and ensuring that the string representation matches the original 
// integer value.

// How it works:
// *  Handle special case: If the integer is zero, the length is 1.
// 1. Calculate the length of the integer. (number of digits)

// 2. Allocate Memory:
//    - Allocate memory for the string result + null-terminator.

// 3. Null-Terminate:
//    - Add a null-terminator at the end of the string to mark the end of the 
//      string data.

// 4. Handle Negative Numbers:
//    - If the integer is negative, store the '-' sign character
//      at the beginning of the string.
//    - Adjust the integer to possitive value.

// 5. Convert to String: 	(This process builds the string representation
// 							of the integer in reverse order.)
//    - Starting from the end of the string, convert each digit of the integer 
//      into a character.
//    - Move from right to left, applying the modulo operator (%) to cut the 
//      last digit and convert it to a character.
//    - Remove the last digit and continue until all digits 
//      are converted.

// 6. Return Result:
//    - The result is the string representation of the integer, with proper 
//      handling of signs and zero.

// 7: Return the resulting string.

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	n_len;

	n_len = 0;
	if (n == 0)
		n_len++;
	if (n < 0)
	{
		n_len++;
		n = n * -1;
	}
	while (n)
	{
		n_len++;
		n = n / 10;
	}
	return (n_len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		n_len;
	int		is_negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_negative = n < 0;
	n_len = ft_nbrlen(n);
	str = (char *)malloc(sizeof(char) * (n_len + 1));
	if (!str)
		return (NULL);
	str[n_len] = '\0';
	if (is_negative)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (--n_len >= is_negative)
	{
		str[n_len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

// #include <stdio.h>

// int	main(void)
// {
//     char	*result = ft_itoa(-123456);

//     printf("Result: %s\n", result);
//     free(result);
//     return (0);
// }
