/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intrauser <intrauser@student.42bangkok.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:42:23 by nsangnga          #+#    #+#             */
/*   Updated: 2024/05/12 15:25:50 by intrauser        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Adds 'new' item to list end.
** - Finds last item, sets its 'next' to 'new'.
** - If list is empty, sets 'new' as start.
*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *newlst)
{
	t_list	*last;

	if (!newlst)
		return ;
	if (!*lst)
	{
		*lst = newlst;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = newlst;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*second_node;
// 	t_list	*new_node;
// 	t_list	*current;

// 	head = ft_lstnew("first");
// 	second_node = ft_lstnew("second");
// 	new_node = ft_lstnew("42");
// 	head->next = second_node;
// 	ft_lstadd_back(&head, new_node);
// 	current = head;
// 	while (current)
// 	{
// 		printf("node content: %s\n", (char *)current->content);
// 		current = current -> next;
// 	}
// 	free(new_node);
// 	free(second_node);
// 	free(head);
// 	return (0);
// }
