/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:44:45 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/23 09:22:23 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strchr Function Explanation:
**
** - Searches for the first occurrence of character 'c' in string 's'.
** - Returns a pointer to the first occurrence of 'c' in 's'.
** - Returns NULL if 'c' is not found.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	char_c;

	char_c = (char)c;
	while (*s != '\0')
	{
		if (*s == char_c)
			return ((char *)s);
		s++;
	}
	if (!char_c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	const char *string = "Hello, World!";
// 	char *result_lib;
// 	char *result_sys;
// 	int i;
// 	int chars_to_test[6];

// 	chars_to_test[0] = 'H';
// 	chars_to_test[1] = 'o';
// 	chars_to_test[2] = 'W';
// 	chars_to_test[3] = '!';
// 	chars_to_test[4] = 'x';
// 	chars_to_test[5] = 0;
// 	i = 0;
// 	while (i < 6)
// 	{
// 		result_lib = ft_strchr(string, chars_to_test[i]);
// 		result_sys = strchr(string, chars_to_test[i]);
// 		if (result_lib)
// 			printf("Character '%c': libft: %s\n", chars_to_test[i], result_lib);
// 		else
// 			printf("Char '%c': libft: NULL\n", chars_to_test[i]);
// 		if (result_sys)
// 			printf("Char '%c': system: %s\n", chars_to_test[i], result_sys);
// 		else
// 			printf("Character '%c': system: NULL\n", chars_to_test[i]);
// 		i++;
// 	}
// 	return (0);
// }
