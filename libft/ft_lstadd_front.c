/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intrauser <intrauser@student.42bangkok.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:42:29 by nsangnga          #+#    #+#             */
/*   Updated: 2024/05/12 15:26:00 by intrauser        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Adds 'new' element to list start.
** - New item's 'next' points to current first item.
** - Updates list start to the new item.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *newlst)
{
	if (!newlst)
		return ;
	newlst->next = *lst;
	*lst = newlst;
}

// #include <stdio.h>

// int main(void)
// {
//     t_list *head = ft_lstnew("second");
//     t_list *new_node = ft_lstnew("first");

//     ft_lstadd_front(&head, new_node);
//     printf("Node content: %s\n", (char *)head->content);
//     head = head->next;

//     free(new_node);
//     return 0;
// }
