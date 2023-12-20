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

void	create_node(t_node **head, int val)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	new_node->val = val;
	new_node->next = *head;
	*head = new_node;
}

void print_Stack(t_node **stack){
    t_node *actual = *stack;
    if(*stack == NULL)
        return;
    while(actual != NULL){
		printf("%i ", actual->val);
		actual = actual->next;
	}
}

t_node	*to_positive_stack (t_node** stack, int argc)
{
	t_node	*iter;
	t_node	*temp;
	int		count;
	int		index;
	int		*counts;

	iter = *stack;
	index = 0;
	counts = malloc(argc*sizeof(int));
	while (iter != NULL)
	{
		temp = *stack;
		count = 0;
		while (temp != NULL)
		{
			if (temp->val < iter->val)
				count++;
			temp = temp->next;
		}
		counts[index] = count;
		iter = iter->next;
		index++;
	}
	order_counts(stack, iter, counts);
	return (iter);
}

t_node	**order_counts(t_node **stack, t_node *iter, int *counts)
{
	int	i;


	iter = *stack;
	i = 0;
	while (iter != NULL)
	{
		iter->val = counts[i];
		iter = iter->next;
		i++;
	}
	free(counts);
	return (stack);
}

int count_bin_digits(int decimal)
{
	int count;

	count = 0;
	if(decimal == 0)
		return (1);
	while (decimal != 0)
	{
		decimal /= 2;
		count++;
	}
	return (count);
}

int	get_max_bin_dig(t_node *node){
	t_node	*current;
	int		max;
	int		count;

	current = node;
	max = current->val;
	count = 0;

	while (current != NULL)
	{
		if (max < current->val)
			max = current->val;
		current = current->next;
	}
	if (max == 0)
		return (1);
	while (max != 0)
	{
		max = max / 2;
		count++;
	}

	return (count);
}
