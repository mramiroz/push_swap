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

void	five_sort(t_node **a, t_node **b, int size)
{
	if (size != 4)
		pb(a, b);
	pb(a, b);
	three_sort(a);
	while (*b != NULL)
	{
		if ((*a)->val - 1 == (*b)->val)
			pa(a, b);
		else if ((*a)->val + 1 == (*b)->val)
			(pa(a, b), sa(a));
		else if(((*b)->val == 0 || (*b)->val == 4 ) && (*b)->next != NULL)
		{
			if ((*b)->next->val == 1 || (*b)->next->val == 3)
				pa(a, b);
			else if ((*b)->next->val == 0)
				pa(a, b);
		}
		rra(a);
	}
		while (is_sorted(*a) != 1)
			ra(a);
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
		five_sort(a, b, size);
	else
		radix_sort(a, b, size);
}
