/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:45:44 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/08 14:21:38 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;
	char	*haystack_ptr;

	if (!haystack && !len)
		return (0);
	haystack_ptr = (char *)haystack;
	needle_len = ft_strlen(needle);
	if (!*needle)
		return (haystack_ptr);
	i = 0;
	while (haystack[i] && i + needle_len <= len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return (haystack_ptr + i);
		i++;
	}
	return (0);
}
