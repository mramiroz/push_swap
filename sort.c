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

void two_sort(t_node **a)
{
	if (is_sorted(*a) == 1)
		return;
	else
		sa(a);
}

void quick_sort(t_node **a, t_node **b)
{
	int pivot;
	t_node *iter;

	iter = *a;
	pivot = (*a)->val;
	int i = 0;
	while (iter != NULL)
	{
		printf("\nA:");
		print_Stack(a);
		printf("\nB:");
		print_Stack(b);

		if (pivot < iter->val)
			pb(a, b);
		else
			ra(a);
		if (i > 5)
			break;
		i++;
	}
}

void radix_sort(t_node **a, t_node **b, int size)
{
	int	i;
	int	j;
	int bin_size;

	bin_size = count_bin_digits(size);
	i = 0;
	while (i <= bin_size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (*a != NULL && (((*a)->val >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		while (*b != NULL)
			pa(a, b);
		i++;
	}
}

void sort(t_node **a, t_node **b, int size)
{
	if (size == 2)
		two_sort(a);
	else if(size <= 5)
		quick_sort(a, b);
	else
		radix_sort(a, b, size);
}

