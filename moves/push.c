/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:25:15 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/10/11 16:25:15 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


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
}

void    pa(t_node **stack_a, t_node **stack_b)
{
    push(stack_b, stack_a);
    ft_putstr_fd("pa\n", 1);
}

void    pb(t_node **stack_a, t_node **stack_b)
{
    push(stack_a, stack_b);
    ft_putstr_fd("pb\n", 1);
}