/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intrauser <intrauser@student.42bangkok.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:44:38 by nsangnga          #+#    #+#             */
/*   Updated: 2024/06/25 16:43:13 by intrauser        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static char	*get_next_word(const char **s, char c)
{
	const char	*start;
	size_t		len;

	len = 0;
	while (**s == c && **s)
		(*s)++;
	start = *s;
	while (**s != c && **s)
	{
		len++;
		(*s)++;
	}
	return (ft_substr(start, 0, len));
}

void	free_array(char **arr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	while (i < words)
	{
		result[i] = get_next_word(&s, c);
		if (!result[i])
		{
			free_array(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
