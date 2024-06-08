/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:17:05 by intrauser         #+#    #+#             */
/*   Updated: 2024/05/18 17:50:33 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_empty_argument(char *arg)
{
	char	*trimmed;

	trimmed = ft_strtrim(arg, " ");
	if (arg[0] == '\0' || ft_strlen(trimmed) == 0)
	{
		free(trimmed);
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	free(trimmed);
}

int	is_stack_sorted(t_list *stack)
{
	t_data	*current_data;
	t_data	*next_data;

	while (stack && stack->next)
	{
		current_data = (t_data *)stack->content;
		next_data = (t_data *)stack->next->content;
		if (current_data->number > next_data->number)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	is_valid_digit(char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '\0')
		return (0);
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

void	check_int_range(t_list *stack)
{
	t_data	*data;

	while (stack != NULL)
	{
		data = (t_data *)stack->content;
		if (data->number < INT_MIN || data->number > INT_MAX)
		{
			ft_putstr_fd("Error\n", 2);
			exit(1);
		}
		stack = stack->next;
	}
}

void	check_dup(t_list *stack)
{
	t_list	*current;
	t_list	*runner;
	t_data	*current_data;
	t_data	*runner_data;

	current = stack;
	while (current != NULL && current->next != NULL)
	{
		current_data = (t_data *)current->content;
		runner = current->next;
		while (runner != NULL)
		{
			runner_data = (t_data *)runner->content;
			if (current_data->number == runner_data->number)
			{
				ft_putstr_fd("Error\n", 2);
				exit(1);
			}
			runner = runner->next;
		}
		current = current->next;
	}
}
