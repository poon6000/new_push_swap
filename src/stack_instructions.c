/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_instructions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 15:00:44 by intrauser         #+#    #+#             */
/*   Updated: 2024/07/07 10:27:35 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_list *stack_a)
{
	if (stack_a && stack_a->next)
	{
		swap(stack_a);
		ft_printf("sa\n");
	}
}

void	sb(t_list *stack_b)
{
	swap(stack_b);
	ft_printf("sb\n");
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss\n");
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	if (*stack_b)
		push(stack_a, pop(stack_b));
	ft_printf("pa\n");
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	if (*stack_a)
		push(stack_b, pop(stack_a));
	ft_printf("pb\n");
}
