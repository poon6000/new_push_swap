/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 12:07:24 by nsangnga          #+#    #+#             */
/*   Updated: 2024/06/08 19:29:13 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}

int	max_bits(t_list *stack)
{
	int		max_bit;
	int		max_index;
	t_data	*data;

	max_bit = 0;
	max_index = 0;
	while (stack)
	{
		data = (t_data *)stack->content;
		max_index = ft_max(max_index, ft_abs(data->index));
		stack = stack->next;
	}
	while ((max_index >> max_bit) != 0)
		max_bit++;
	return (max_bit);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int		size;
	int		max_bit;
	int		current_bit;
	int		i;
	t_data	*data;

	size = ft_lstsize(*stack_a);
	max_bit = max_bits(*stack_a);
	current_bit = 0;
	while (current_bit < max_bit)
	{
		i = 0;
		while (i < size)
		{
			data = (t_data *)(*stack_a)->content;
			if (((data->index >> current_bit) & 1) == 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			i++;
		}
		while (*stack_b != NULL)
			pa(stack_b, stack_a);
		current_bit++;
	}
}