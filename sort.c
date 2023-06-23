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


void sort_small_stack(t_node **a, t_node **b)
{
	int	digitos;

	digitos = get_max_bin_dig(*a);
	digitos--;
	printf("%i", digitos);

	while (is_sorted(*a) != 1 )
	{
		while (is_one((*a), digitos) != 1)
		{
			if (((*a)->val>>digitos)&1 == 0)
				push(a, b);
			else if(((*a)->val>>digitos)&1 == 1)
				rotate(a);
		}
		while (b == NULL)
			push(a, b);
		digitos--;
	}
}

void	three_sort(t_node **a)
{
	while (is_sorted(*a) != 1)
	{
		print_Stack(a);
		if ((*a)->val < (*a)->next->val)
			reverse_rotate(a);
		else if ((*a)->val > (*a)->next->next->val)
			rotate(a);
		else if ((*a)->val > (*a)->next->val)
			swap(a);
	}
			print_Stack(a);
}