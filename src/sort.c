/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 10:28:29 by nsangnga          #+#    #+#             */
/*   Updated: 2024/06/09 17:40:50 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//debug
void print_stack_columns(t_list *stack_a, t_list *stack_b)
{
    t_list *current_a = stack_a;
    t_list *current_b = stack_b;

    printf("Stack A              Stack B\n");
    printf("Number Index         Number Index\n");

    while (current_a || current_b)
    {
        if (current_a)
        {
            t_data *data_a = (t_data *)current_a->content;
            printf("%6d %5d", data_a->number, data_a->index);
            current_a = current_a->next;
        }
        else
        {
            printf("             ");
        }

        if (current_b)
        {
            t_data *data_b = (t_data *)current_b->content;
            printf("         %6d %5d", data_b->number, data_b->index);
            current_b = current_b->next;
        }

        printf("\n");
    }
}

void log_operation(const char *op, t_list **stack_a, t_list **stack_b)
{
    printf("Operation: %s\n", op);
    print_stack_columns(*stack_a, *stack_b);
    printf("\n");
}

//debug
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

void	push_smallest_to_b(t_list **stack_a, t_list **stack_b)
{
	int	smallest_index;
	int	i;

	smallest_index = find_smallest_index(*stack_a);
	if (smallest_index == 1)
	{
		sa(*stack_a);
		log_operation("sa", stack_a, stack_b); //debug
	}
	else if (smallest_index == 2)
	{
		ra(stack_a);
		log_operation("ra", stack_a, stack_b); //debug
		ra(stack_a);
		log_operation("ra", stack_a, stack_b); //debug
	}
	else if (smallest_index >= 3)
	{
		i = 0;
		while (i < 5 - smallest_index)
		{
			rra(stack_a);
			log_operation("rra", stack_a, stack_b); //debug
			i++;
		}
	}
	pb(stack_a, stack_b);
	log_operation("pb", stack_a, stack_b); //debug
}

void	sort_five_elements(t_list **stack_a, t_list **stack_b)
{
	push_smallest_to_b(stack_a, stack_b);
	if (is_stack_sorted(*stack_a))
	{
		pa(stack_b, stack_a);
		log_operation("pb", stack_a, stack_b); //debug
		return ;
	}
	sort_up_to_three_elements(stack_a);
	pa(stack_b, stack_a);
	log_operation("pa", stack_a, stack_b); //debug
	pa(stack_b, stack_a);
	log_operation("pa", stack_a, stack_b); //debug
}

