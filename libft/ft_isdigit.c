/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:42:01 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/23 09:21:25 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Checks if character is a digit (0-9).
** - Returns 1 if true, 0 if false.
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// {
// 	if (c >= '0' && c <= '9')
// 		return (1);
// 	return (0);
// }

// #include <stdio.h>
// #include <ctype.h> 

// int	main(void)
// {
// 	int	tests[] = {'a', '5', 'Z', '9', '0', '-', '+', '\0', ' '};
// 	size_t	i;

// 	i = 0;
// 	while (i < sizeof(tests) / sizeof(*tests))
// 	{
// 		printf("Testing char: '%c'\n", tests[i]);
// 		printf("expect: %d\n", isdigit(tests[i]));
// 		printf("result: %d\n\n", ft_isdigit(tests[i]));
// 		i++;
// 	}
// 	return (0);
// }
