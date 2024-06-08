/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:43:09 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/08 11:43:12 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Creates new list by applying function to each item.
** - Allocates memory for new items.
** - If allocation fails, frees memory and returns NULL.
** - Returns the new list.
*/

#include "libft.h"

static t_list	*ft_node(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	void	*content;

	content = f(lst->content);
	new_node = ft_lstnew(content);
	if (!new_node)
	{
		del(content);
		return (NULL);
	}
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;
	t_list	*new_node;
	t_list	*prev_node;

	if (!f || !del)
		return (NULL);
	new_head = NULL;
	prev_node = NULL;
	while (lst)
	{
		new_node = ft_node(lst, f, del);
		if (!new_node)
		{
			ft_lstclear(&new_head, del);
			return (NULL);
		}
		if (!new_head)
			new_head = new_node;
		else
			prev_node->next = new_node;
		prev_node = new_node;
		lst = lst->next;
	}
	return (new_head);
}

// #include <stdio.h>

// void *to_uppercase(void *content)
// {
//     char *str = ft_strdup((char *)content);
//     char *original = str;
//     while (*str)
//     {
//         *str = ft_toupper(*str);
//         str++;
//     }
//     return original;
// }

// void del_function(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     char str1[] = "First Node";
//     char str2[] = "Second Node";
//     char str3[] = "Third Node";

//     t_list *head = ft_lstnew(str1);
//     head->next = ft_lstnew(str2);
//     head->next->next = ft_lstnew(str3);

//     t_list *new_list = ft_lstmap(head, to_uppercase, del_function);

//     t_list *current = new_list;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }

//     ft_lstclear(&new_list, del_function);

//     return 0;
// }
