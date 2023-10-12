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

void	two_sort(t_node **a)
{
	if (is_sorted(*a) == 1)
		return ;
	else
		sa(a);
}

void	three_sort(t_node **a)
{
	int	current;
	int	mid;
	int	last;

	current = (*a)->val;
	mid = (*a)->next->val;
	last = (*a)->next->next->val;

	if (is_sorted(*a) == 1)
		return;
	if (current > mid  && last > current)
		sa(a);
	else if (current > mid && mid > last)
		(sa(a), rra(a));
	else if (current > mid && mid < last)
		ra(a);
	else if (current < mid && mid > last)
		(sa(a), ra(a));
	else if (current < mid && mid < last)
		rra(a);


}

void	five_sort(t_node **a, t_node **b, int size)
{
	int	i;

	i = 0;
	while (i < 2)
		(pb(a, b), i++);
	if (size == 3)
		three_sort(a);
	else
		two_sort(a);
	while (*b != NULL)
	{
		if ((*b)->val > (*a)->val)
			pa(a, b);
		else
			(ra(a), pa(a, b));
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
	else if (size == 3)
		three_sort(a);
	else if(size <= 5)
		five_sort(a, b, size);
	else
		radix_sort(a, b, size);
}

