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

void	pop(t_node **head)
{
	t_node	*current;

	current = *head;
	*head = (*head)->next;
	free(current);
}

void	swap(t_node **head)
{
	t_node	*first;
	t_node	*second;
	int		val;

	if (*head == NULL)
		return ;
	first = *head;
	second = (*head)->next;
	val = second->val;
	second->val = first->val;
	first->val = val;
	*head = first;
	printf("swap\n");
}

void	push(t_node **src, t_node **dest)
{
	int	val;

	if (*src == NULL)
		return ;
	val = (*src)->val;
	pop(src);
	create_node(dest, val);
	printf("push\n");
}

void	rotate(t_node **head)
{
	t_node	*tmp;

	if (*head == NULL)
		return ;
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = malloc(sizeof(t_node));
	tmp->next->val = (*head)->val ;
	tmp->next->next = NULL;
	pop(head);
	printf("rotate\n");
}

void	reverse_rotate(t_node **head)
{
	t_node	*tmp;
	t_node	*tmps;

	if (*head == NULL)
		return ;
	tmp = *head;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmps = tmp->next;
	tmp->next = NULL;
	create_node(head, tmps->val);
	free(tmps);
	printf("reverse rotate\n");
}