/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsangnga <nsangnga@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:41:10 by nsangnga          #+#    #+#             */
/*   Updated: 2023/10/23 09:20:29 by nsangnga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;

	pointer = malloc(count * size);
	if (!pointer)
		return (NULL);
	ft_memset(pointer, 0, count * size);
	return (pointer);
}

// #include <stdio.h>

// void print_array(int *arr, size_t size)
// {
//     size_t i = 0;
//     while (i < size)
//     {
//         printf("%d ", arr[i]);
//         i++;
//     }
//     printf("\n");
// }

// int main(void)
// {
//     int *arr_ft_calloc = (int *)ft_calloc(5, sizeof(int));
//     int *arr_calloc = (int *)calloc(5, sizeof(int));

//     size_t i = 0;
//     while (i < 5)
//     {
//         arr_calloc[i] = i * 2;
//         arr_ft_calloc[i] = i * 2;
//         i++;
//     }

//     printf("Array values (calloc): ");
//     print_array(arr_calloc, 5);

//     printf("Array values (ft_calloc): ");
//     print_array(arr_ft_calloc, 5);

//     free(arr_ft_calloc);
//     free(arr_calloc);

//     return 0;
// }
