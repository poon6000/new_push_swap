/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intrauser <intrauser@student.42bangkok.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:43:21 by nsangnga          #+#    #+#             */
/*   Updated: 2024/05/15 22:11:29 by intrauser        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Counts items in the list.
** - Starts from first item, goes to end.
** - Returns total item count.
*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list *head;
// 	head = ft_lstnew("first");
//     head->next = ft_lstnew("second");
//     head->next->next = ft_lstnew("third");
//     printf("List size: %d\n", ft_lstsize(head));
//     free(head->next->next);
//     free(head->next);
//     free(head);
//     return 0;
// }
