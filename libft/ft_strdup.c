/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:44:51 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/22 22:43:28 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
1 The function allocates memory for the duplicate string, 
2 copies the original string to the new memory location, 
3 then returns a pointer to the duplicate string.
*/

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	s1_len;

	s1_len = ft_strlen(s1) + 1;
	copy = (char *)malloc(s1_len);
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, s1, s1_len);
	return (copy);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(void)
// {
//     const char	*original = "Hello, World!";
//     char		*copy1 = ft_strdup(original);
//     char		*copy2 = strdup(original);

//     printf("Original: %s\n", original);
//     printf("Copy1 (ft_strdup): %s\n", copy1);
//     printf("Copy2 (strdup): %s\n", copy2);
//     free(copy1);
//     free(copy2);
//     return 0;
// }
