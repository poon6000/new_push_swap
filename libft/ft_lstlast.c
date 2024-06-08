/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:43:02 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/08 11:43:05 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Finds last item in the list.
** - Traverses list from start to end.
** - Returns the last item.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*last_node;

// 	head = ft_lstnew("first");
// 	head->next = ft_lstnew("second");
// 	head->next->next = ft_lstnew("third");
// 	last_node = ft_lstlast(head);
// 	printf("Last node content: %s\n", (char *)last_node->content);
// 	free(head->next->next);
// 	free(head->next);
// 	free(head);
// 	return (0);
// }
