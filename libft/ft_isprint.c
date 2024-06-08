/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:42:09 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/22 16:23:49 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// {
// 	if (c >= 32 && c <= 126)
// 		return (1);
// 	return (0);
// }

// #include <ctype.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int	tests[] = {31, 'a', '5', -1, '-', 'Z', '0', 0, '\0', ' '};
// 	size_t	i;

// 	i = 0;
// 	while (i < sizeof(tests) / sizeof(*tests))
// 	{
// 		printf("Testing value: %d\n", tests[i]);
// 		if (tests[i] >= 32 && tests[i] <= 126)
// 			printf("Testing char: '%c'\n", tests[i]);
// 		printf("expect: %d\n", isprint(tests[i]));
// 		printf("result: %d\n\n", ft_isprint(tests[i]));
// 		i++;
// 	}
// 	return (0);
// }
