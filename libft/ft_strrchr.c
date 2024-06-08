/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:45:50 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/08 11:45:53 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*last_occur;
	unsigned char	char_c;

	last_occur = NULL;
	char_c = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == char_c)
			last_occur = ((char *)s);
		s++;
	}
	if (!char_c)
		return ((char *)s);
	return (last_occur);
}
