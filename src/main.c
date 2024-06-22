/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 10:28:25 by nsangnga          #+#    #+#             */
/*   Updated: 2024/06/22 17:11:35 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_error_and_exit(char **nbr, int curr_idx, t_list **stack_a)
{
	free_array(nbr, curr_idx + 1);
	ft_lstclear(stack_a, free);
	ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

void	add_number_to_stack(char *num_str, t_list **stack_a, char **nbr, \
int curr_idx)
{
	t_data		*new;
	long long	num;

	if (!is_valid_digit(num_str))
		print_error_and_exit(nbr, curr_idx, stack_a);
	new = malloc(sizeof(t_data));
	if (!new)
		print_error_and_exit(nbr, curr_idx, stack_a);
	num = ft_atoll(num_str);
	if (num > INT_MAX || num < INT_MIN)
	{
		free(new);
		print_error_and_exit(nbr, curr_idx, stack_a);
	}
	new->number = (int)num;
	new->index = 0;
	ft_lstadd_back(stack_a, ft_lstnew(new));
}

void	init_stack(int argc, char **argv, t_list **stack_a)
{
	char	**nbr;
	int		i;
	int		curr_idx;

	i = 1;
	while (i < argc)
	{
		check_empty_argument(argv[i]);
		nbr = ft_split(argv[i], ' ');
		curr_idx = 0;
		while (nbr[curr_idx])
		{
			if (nbr[curr_idx][0] == '\0')
				print_error_and_exit(nbr, curr_idx, stack_a);
			add_number_to_stack(nbr[curr_idx], stack_a, nbr, curr_idx);
			curr_idx++;
		}
		free_array(nbr, curr_idx);
		i++;
	}
	add_index(*stack_a);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc <= 1)
		return (EXIT_FAILURE);
	init_stack(argc, argv, &stack_a);
	check_dup(stack_a);
	check_int_range(stack_a);
	if (!is_stack_sorted(stack_a))
	{
		if (ft_lstsize(stack_a) <= 3)
			sort_up_to_three_elements(&stack_a);
		else if (ft_lstsize(stack_a) == 5)
			sort_five_elements(&stack_a, &stack_b);
		else
			radix_sort(&stack_a, &stack_b);
	}
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	return (0);
}
