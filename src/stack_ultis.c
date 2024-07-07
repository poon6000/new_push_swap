/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ultis.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:01:04 by intrauser         #+#    #+#             */
/*   Updated: 2024/07/07 10:27:35 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_list *stack)
{
	t_data	*first;
	t_data	*second;
	int		temp_number;
	int		temp_index;

	if (stack && stack->next)
	{
		first = (t_data *)stack->content;
		second = (t_data *)stack->next->content;
		temp_number = first->number;
		first->number = second->number;
		second->number = temp_number;
		temp_index = first->index;
		first->index = second->index;
		second->index = temp_index;
	}
}

void	push(t_list **stack, t_data *data)
{
	t_list	*new_node;

	new_node = ft_lstnew(data);
	if (!new_node)
	{
		free(data);
		exit(EXIT_FAILURE);
	}
	ft_lstadd_front(stack, new_node);
}

t_data	*pop(t_list **stack)
{
	t_data	*top_data;
	t_list	*top_node;

	if (!*stack)
		exit(EXIT_FAILURE);
	top_node = *stack;
	top_data = (t_data *)top_node->content;
	*stack = top_node->next;
	free(top_node);
	return (top_data);
}

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (*stack && (*stack)->next)
	{
		first = *stack;
		last = *stack;
		while (last->next)
			last = last->next;
		*stack = first->next;
		first->next = NULL;
		last->next = first;
	}
}

void	reverse_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*second_last;

	if (*stack && (*stack)->next)
	{
		last = *stack;
		second_last = NULL;
		while (last->next)
		{
			second_last = last;
			last = last->next;
		}
		second_last->next = NULL;
		last->next = *stack;
		*stack = last;
	}
}
