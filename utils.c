/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 08:54:08 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/14 08:54:08 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_Stack(node **stack){
    node *actual = *stack;
    if(*stack == NULL)
        return;
    while(actual != NULL){
		printf("Num: %i\n", actual->val);
		actual = actual->next;
	}
}

node	*to_positive_stack(node **stack, int argc)
{
	int		order;
	int		index;
	node	*iter;
	node	*res;

	iter = *stack;
	order = 0;
	index = 0;
	while (index != argc)
	{
		order = get_min(iter, index);
		while (iter != NULL)
		{
			printf("O: %i I: %i\n", order, iter->val);
			if (order == iter->val)
			{
				iter->val = index;
				printf("SI");
			}
			iter = iter->next;
		}
		index++;
	}
	stack = &iter;
	return (iter);
}

int	get_min(node *stack, int index)
{
	int	min;

	min = 0;
	while (stack != NULL)
	{
		if (min > stack->val && (index - 1) != stack->val)
			min = stack->val;
		stack = stack->next;
	}
	return (min);
}