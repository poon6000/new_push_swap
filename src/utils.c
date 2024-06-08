/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 15:08:13 by intrauser         #+#    #+#             */
/*   Updated: 2024/06/08 20:00:19 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	update_pointers(t_list *stack, t_data **data_first, \
		t_data **data_second, t_data **data_third)
{
	if (stack)
		*data_first = (t_data *)stack->content;
	if (stack && stack->next)
		*data_second = (t_data *)stack->next->content;
	if (stack->next && stack->next->next)
		*data_third = (t_data *)stack->next->next->content;
}

int	find_index(t_list *head, int v)
{
	int		n;
	t_data	*data;

	n = 0;
	while (head)
	{
		data = (t_data *)head->content;
		if (data->number < v)
			n++;
		head = head->next;
	}
	return (n);
}

void	add_index(t_list *head)
{
	t_list	*node;
	t_data	*data;

	node = head;
	while (node)
	{
		data = (t_data *)node->content;
		data->index = find_index(head, data->number);
		node = node->next;
	}
}

int	find_smallest_index(t_list *stack)
{
	int		smallest_index;
	int		index;
	t_data	*smallest_data;
	t_data	*current_data;

	smallest_data = (t_data *)stack->content;
	smallest_index = 0;
	index = 0;
	while (stack)
	{
		current_data = (t_data *)stack->content;
		if (current_data->index < smallest_data->index)
		{
			smallest_data = current_data;
			smallest_index = index;
		}
		stack = stack->next;
		index++;
	}
	return (smallest_index);
}
