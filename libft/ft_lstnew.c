/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:43:16 by nsangnga          #+#    #+#             */
/*   Updated: 2024/05/05 14:28:59 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Creates a new list item.
** - Allocates memory for the item.
** - Sets 'content' to the given value.
** - Sets 'next' to NULL.
** - Returns the new item.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*node;
// 	int		content;

// 	content = 42;
// 	node = ft_lstnew(&content);
// 	printf("Node content %d\n", *(int *)node->content);
// 	free(node);
// 	return (0);
// }
