/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 10:28:29 by nsangnga          #+#    #+#             */
/*   Updated: 2024/06/08 20:21:52 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_smallest_to_b(t_list **stack_a, t_list **stack_b)
{
	int	smallest_index;

	smallest_index = find_smallest_index(*stack_a);
	if (smallest_index == 1)
		sa(*stack_a);
	else if (smallest_index == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (smallest_index >= 3)
	{
		while (smallest_index++ < 5)
			rra(stack_a);
	}
	pb(stack_a, stack_b);
}

void	handle_three_elements(t_list **stack, t_data *data_first, \
t_data *data_second, t_data *data_third)
{
	if (data_first->index > data_second->index && data_first->index \
	< data_third->index)
		sa(*stack);
	else if (data_first->index > data_second->index && data_second->index \
	> data_third->index)
	{
		sa(*stack);
		rra(stack);
	}
	else if (data_first->index > data_second->index && data_second->index \
	< data_third->index && data_first->index > data_third->index)
	{
		ra(stack);
	}
	else if (data_first->index < data_second->index && data_second->index \
	> data_third->index && data_first->index < data_third->index)
	{
		sa(*stack);
		ra(stack);
	}
	else if (data_first->index < data_second->index && data_second->index \
	> data_third-> index && data_first->index > data_third->index)
		rra(stack);
}

void	sort_three_elements(t_list **stack)
{
	t_data	*data_first;
	t_data	*data_second;
	t_data	*data_third;

	update_pointers(*stack, &data_first, &data_second, &data_third);
	handle_three_elements(stack, data_first, data_second, data_third);

}

void	sort_up_to_three_elements(t_list **stack)
{
	t_data	*data_first;
	t_data	*data_second;
	int		size;

	size = ft_lstsize(*stack);
	if (size < 2)
		return ;
	if (size == 2)
	{
		data_first = (t_data *)(*stack)->content;
		data_second = (t_data *)(*stack)->next->content;
		if (data_first->index > data_second->index)
			sa(*stack);
	}
	else if (size == 3)
		sort_three_elements(stack);
}

void	sort_five_elements(t_list **stack_a, t_list **stack_b)
{
	push_smallest_to_b(stack_a, stack_b);
	push_smallest_to_b(stack_a, stack_b);
	sort_up_to_three_elements(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}
