/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:42:56 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/08 11:42:59 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Applies function to each list item.
** - Traverses list from start to end.
** - Applies function to each item's content.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// void modify_content(void *content)
// {
// 	char *str = (char *)content;
// 	while (*str)
// 	{
// 		*str = ft_toupper(*str);
// 		str++;
// 	}
// }

// int main(void)
// {
// char str1[] = "First Node";
// char str2[] = "Second Node";
// char str3[] = "Third Node";

// t_list *head = ft_lstnew(str1);
// head->next = ft_lstnew(str2);
// head->next->next = ft_lstnew(str3);

// ft_lstiter(head, modify_content);

// t_list *current = head;
// while (current)
// {
// 	printf("%s\n", (char *)current->content);
// 	current = current->next;
// }
// return (0);
// }
