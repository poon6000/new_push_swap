/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:46:03 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/24 17:27:59 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	1. Check if the input string is NULL.
	2. Get the length of the input string using the ft_strlen function.
	3. Check if the starting index is greater than or equal to the string
	 length, if so, return a new empty string using the ft_strdup function.
	4. Check if len extends beyond the end of the string, 
		if so, adjust len to cover only the remaining characters.
	5. Allocate memory for the new substring including space
		for a null-terminator.
	6. Copy the specified portion of the input string to the
	 	new substring using the ft_strlcpy function.
	7. Return the new substring.

	Input:
s = "This is a sample string."
start = 5
len = 7

Step 1: Check for NULL Input
  |
  |--- Input String (s) is not NULL

Step 2: Calculate Input String Length (s_len)
  |
  |--- s_len = 24

Step 3: Adjust Substring Length (len)
  |
  |--- start = 5
  |--- len = 7 (Original)
  |
  |--- Adjusted len = 7
  	 (Can extract 7 characters from 's' starting at position 5)

Step 4: Allocate Memory for Substring (sub_str)
  |
  |--- Allocate memory for 'sub_str' (size = 7 + 1 = 8 characters)

Step 5: Copy Substring from 's' to 'sub_str'
  |
  |--- Copy 7 characters from 's' starting at position 5 to 'sub_str'
  |
  |--- Extracted Substring (sub_str) = "is a sa"

Step 6: Return the Substring (sub_str)
  |
  |--- Return 'sub_str' = "is a sa"

*/

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;
	sub_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[len] = '\0';
	return (sub_str);
}
// {
// 	char	*sub_str;
// 	size_t	s_len;

// 	if (!s)
// 		return (NULL);
// 	s_len = ft_strlen(s);
// 	if (start > s_len)
// 	{
// 		start = s_len;
// 		len = 0;
//	}
// 	else if (len > s_len - start)
// 		len = s_len - start;
// 	sub_str = (char *)malloc(sizeof(char) * (len + 1));
// 	if (!sub_str)
// 		return (NULL);
// 	strlcpy(sub_str, s + start, len + 1);
// 	return (sub_str);
// }

// #include <stdio.h>

// int main() 
// {
//   char *s = "Hello, world!";
//   char *sub_str1 = ft_substr(s, 0, 20);
//   char *sub_str2 = ft_substr(s, 8, 3);
//   char *sub_str3 = ft_substr(s, 11, 5);

//   printf("sub_str1: %s\n", sub_str1);
//   printf("sub_str2: %s\n", sub_str2);
//   printf("sub_str3: %s\n", sub_str3);
//   free(sub_str1);
//   free(sub_str2);
//   free(sub_str3);
// 	char *s = ft_substr("", 1, 1);
// 	printf ("%p\n", s);
// 	if(s){
// 		printf ("%d\n", *s);
// 		free (s);
// 	}
//   return (0);
// }
