/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:21:37 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/21 10:21:37 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void radix_sort(t_node **a, t_node **b, int size)
{
	int	i;
	int	j;
	int bin_size;
	int count;

	bin_size = count_bin_digits(size);
	i = 0;
	count = 0;
	while (i <= bin_size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (*a != NULL && (((*a)->val >> i) & 1) == 0)
			{
				push(a, b);
				count++;
			}
			else
			{
				rotate(a);
				count++;
			}
			j++;
		}
		while (*b != NULL)
		{
			push(b, a);
			count++;
		}
		i++;
	}
}
