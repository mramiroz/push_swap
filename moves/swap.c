/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:24:30 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/10/11 16:24:30 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


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

void    sa(t_node **stack_a)
{
    swap(stack_a);
    ft_putstr_fd("sa\n", 1);
}

void    sb(t_node **stack_b)
{
    swap(stack_b);
    ft_putstr_fd("sb\n", 1);
}