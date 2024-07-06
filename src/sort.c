/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 10:28:29 by nsangnga          #+#    #+#             */
/*   Updated: 2024/07/06 14:58:34 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	handle_three_elements(t_list **stack, int first, int second, int third)
{
	if (first > second && first < third)
		sa(*stack);
	else if (first > second && second > third)
	{
		sa(*stack);
		rra(stack);
	}
	else if (first > second && second < third && first > third)
	{
		ra(stack);
	}
	else if (first < second && second > third && first < third)
	{
		sa(*stack);
		ra(stack);
	}
	else if (first < second && second > third && first > third)
		rra(stack);
}

void	sort_three_elements(t_list **stack)
{
	t_data	*data_first;
	t_data	*data_second;
	t_data	*data_third;

	update_pointers(*stack, &data_first, &data_second, &data_third);
	handle_three_elements(stack, data_first->index, data_second->index, \
	data_third->index);
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

void	push_smallest_to_b(t_list **stack_a, t_list **stack_b)
{
	int	smallest_index;
	int	i;
	int	size;

	smallest_index = find_smallest_index(*stack_a);
	size = ft_lstsize(*stack_a);
	if (smallest_index == 1)
		sa(*stack_a);
	else if (smallest_index == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (smallest_index >= 3)
	{
		i = 0;
		while (i < size - smallest_index)
		{
			rra(stack_a);
			i++;
		}
	}
	pb(stack_a, stack_b);
}

void	sort_five_elements(t_list **stack_a, t_list **stack_b)
{
	push_smallest_to_b(stack_a, stack_b);
	if (!is_stack_sorted(*stack_a))
		push_smallest_to_b(stack_a, stack_b);
	if (!is_stack_sorted(*stack_a))
		sort_up_to_three_elements(stack_a);
	while (*stack_b)
		pa(stack_b, stack_a);
}

//debug
// void print_stacks(t_list *stack_a, t_list *stack_b)
// {
//     t_data *data_a;
//     t_data *data_b;

//     printf("Stack A:\t\tStack B:\n");

//     while (stack_a || stack_b) // Loop until both stacks are empty
//     {
//         // Print Stack A elements
//         if (stack_a) 
//         {
//             data_a = (t_data *)stack_a->content;
//             printf("{%d, %d}\t\t", data_a->index, data_a->number);
//             stack_a = stack_a->next;
//         }
//         else
//         {
//             printf("\t\t");  // Add indentation if stack_a is empty
//         }

//         // Print Stack B elements
//         if (stack_b)
//         {
//             data_b = (t_data *)stack_b->content;
//             printf("{%d, %d}\n", data_b->index, data_b->number);
//             stack_b = stack_b->next;
//         }
//         else
//         {
//             printf("\n");  // Add newline if stack_b is empty
//         }
//     }
// }
