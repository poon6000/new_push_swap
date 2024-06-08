/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:45:56 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/23 10:34:32 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;
	char		*trimmed_str;
	char		*dest;

	if (!s1 || !set)
		return (NULL);
	start = s1;
	end = s1 + ft_strlen(s1);
	while (*start && ft_strchr(set, *start))
		start++;
	while (end > start && ft_strchr(set, *(end - 1)))
		end--;
	trimmed_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed_str)
		return (NULL);
	dest = trimmed_str;
	while (start < end)
	{
		*dest++ = *start++;
	}
	*dest = 0;
	return (trimmed_str);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// // Test Case 1
//     char *result1 = ft_strtrim("   Hello World   ", " ");
//     printf("Expected: 'Hello World'\nGot: '%s'\n\n", result1);
//     free(result1);  // Free the memory allocated by ft_strtrim

//     // Test Case 2
//     char *result2 = ft_strtrim("!!!Hello World!!!", "!");
//     printf("Expected: 'Hello World'\nGot: '%s'\n\n", result2);
//     free(result2);

//     // Test Case 3
//     char *result3 = ft_strtrim("", " ");
//     printf("Expected: ''\nGot: '%s'\n\n", result3);
//     free(result3);

//     // Test Case 4
//     char *result4 = ft_strtrim("NoTrimmingHere", " ");
//     printf("Expected: 'NoTrimmingHere'\nGot: '%s'\n\n", result4);
//     free(result4);

//     // Test Case 5
//     char *result5 = ft_strtrim("   multiple   spaces   ", " ");
//     printf("Expected: 'multiple   spaces'\nGot: '%s'\n\n", result5);
//     free(result5);

//     return (0);
// }
