/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:42:50 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/21 15:06:22 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Deletes given list item.
** - Frees item's content using given function.
** - Frees the item.
** - Sets item pointer to NULL.
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free (lst);
}

// #include <stdio.h>

// void del_function(void *content)
// {
//     free(content);
// }

// void free_split(void *content)
// {
// 	char **split = (char **)content;
// 	while (*split)
// 		free(*split++);
// 	free (content);
// }

// int main(void)
// {
// 	char *str = strdup("Hello, World!");
// 	t_list *node1 = ft_lstnew(str);
// 	ft_lstdelone(node1, del_function);

// 	t_list *node2 = ft_lstnew(ft_split("Hello, World!", 32));
// 	ft_lstdelone(node2, free_split);

//     return 0;
// }
