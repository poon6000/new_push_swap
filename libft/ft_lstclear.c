/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:42:35 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/21 15:08:56 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Clears and frees list items.
** - Frees each item's content using given function.
** - Frees each item.
** - Sets list start to NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = tmp;
	}
}

// #include <stdio.h>

// void del_function(void *content)
// {
//     free(content);
// }

// int main(void)
// {
// 	char *str1 = strdup("First Node");
// 	char *str2 = strdup("Second Node");
// 	char *str3 = strdup("Third Node");

// 	t_list *head = ft_lstnew(str1);
// 	head->next = ft_lstnew(str2);
// 	head->next->next = ft_lstnew(str3);
// 	printf("Clearing the list...\n");
// 	ft_lstclear(&head, del_function);
// 	if (!head)
// 		printf("List cleared successfully.\n");
// 	if (head)
// 		printf("List cleared unsuccessfully.\n");
// 	return 0;
// }
