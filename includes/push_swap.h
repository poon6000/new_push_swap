/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:20:54 by nsangnga          #+#    #+#             */
/*   Updated: 2024/06/08 19:51:15 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define HASH_SIZE 1000

# include "../libft/libft.h"
# include "../libft/ft_printf.h"
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>

// Stack
typedef struct s_data
{
	int	number;
	int	index;
}		t_data;

// Operation functions
void	swap(t_list *stack);
void	sa(t_list *stack_a);
void	sb(t_list *stack_b);
void	ss(t_list *stack_a, t_list *stack_b);
void	push(t_list **stack, t_data *data);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
t_data	*pop(t_list **stack);
void	rotate(t_list **stack);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	reverse_rotate(t_list **stack);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

// Sort functions
void	sort_three_elements(t_list **stack);
void	sort_up_to_three_elements(t_list **stack);
void	sort_five_elements(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);

// Utils functions
int		ft_max(int a, int b);
int		ft_abs(int x);
void	add_index(t_list *head);
int		find_index(t_list *head, int v);
void	add_number_to_stack(char *num_str, t_list **stack_a, char **nbr, int j);
void	print_error_and_exit(char **nbr, int j);
void	update_pointers(t_list *stack, t_data **data_first, \
		t_data **data_second, t_data **data_third);
int		find_smallest_index(t_list *stack);

// Checker functions
void	check_empty_argument(char *arg);
void	check_dup(t_list *stack);
void	check_int_range(t_list *stack);
int		is_valid_digit(char *str);
int		is_stack_sorted(t_list *stack);

#endif