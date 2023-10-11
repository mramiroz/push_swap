/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 09:42:00 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/11 09:42:00 by mrarmiro-        ###   ########.fr       */
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



void	swap(t_node **head)
{
	int	temp;

	if (*head != NULL && (*head)->next != NULL)
	{
		temp = (*head)->val;
		(*head)->val = (*head)->next->val;
		(*head)->next->val = temp;
	}
}

void	push(t_node **src, t_node **dest)
{
	t_node	*temp;

	if (*src != NULL && dest != NULL)
	{
		temp = *src;
		*src = temp->next;
		temp->next = *dest;
		*dest = temp;
	}
	ft_putstr_fd("push\n", 1);
}

void	rotate(t_node **stack)
{
	t_node *temp;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = *stack;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = *stack;
		*stack = (*stack)->next;
		temp->next->next = NULL;
	}
	ft_putstr_fd("rotate\n", 1);
}

void	reverse_rotate(t_node **stack)
{
	t_node *temp;
	t_node *temp2;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		temp = *stack;
		while (temp->next != NULL)
		{
			temp2 = temp;
			temp = temp->next;
		}
		temp->next = *stack;
		temp2->next = NULL;
		*stack = temp;
	}
	ft_putstr_fd("reverse rotate\n", 1);
}

void rrr(t_node **a, t_node **b)
{
	rotate(a);
	rotate(b);
}