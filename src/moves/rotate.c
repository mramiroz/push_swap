/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:20:29 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/10/11 16:20:29 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*temp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = *stack;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = *stack;
		*stack = (*stack)->next;
		temp->next->next = NULL;
	}
}

void	ra(t_node **stack_a)
{
	rotate(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_node **stack_b)
{
	rotate(stack_b);
	ft_putstr_fd("rb\n", 1);
}
