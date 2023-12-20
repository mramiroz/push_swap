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
	int	fir;
	int	mid;
	int	last;

	fir = (*a)->val;
	mid = (*a)->next->val;
	last = (*a)->next->next->val;
	if (fir > mid && mid < last && last > fir)
		sa(a);
	else if (fir > mid && mid > last && last < fir)
		(sa(a), rra(a));
	else if (fir > mid && mid < last && last < fir)
		ra(a);
	else if (fir < mid  && mid > last && last > fir)
		(sa(a), ra(a));
	else if (fir < mid && mid > last && last < fir)
		rra(a);
}

void	five_sort(t_node **a, t_node **b)
{
	t_node *small;
	int pos;
	int len;

	while (len_stack(*a) > 3)
	{
		small = find_min(*a);
		pos = find_node(*a, small->val);
		len = len_stack(*a);
		if (pos > len / 2)
		{
			while ((*a)->val != small->val)
				rra(a);
		}
		else
		{
			while ((*a)->val != small->val)
				ra(a);
		}
		pb(a, b);
	}
	three_sort(a);
	while (*b != NULL)
		pa(a, b);
}

void	radix_sort(t_node **a, t_node **b, int size)
{
	int	i;
	int	j;
	int	bin_size;

	bin_size = count_bin_digits(size);
	i = 0;
	while (i < bin_size)
	{
		j = 0;
		while (j < size)
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

void	sort(t_node **a, t_node **b, int size)
{
	if (size == 2)
		two_sort(a);
	else if (size == 3)
		three_sort(a);
	else if(size <= 5)
		five_sort(a, b);
	else
		radix_sort(a, b, size);
}
