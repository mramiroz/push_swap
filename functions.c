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

void print_Stack(node **stack){
    node *actual = *stack;
    while(actual->next != NULL){
		printf("Num: %i\n", actual->val);
		actual = actual->next;
	}
}

void push(node **head, int val)
{
    node *new_node = (node *) malloc(sizeof(node));
    new_node->val = val;
    new_node->next = *head; 
    *head = new_node;
}

node *swap(node **head){
    node *first;
    node *second;
    node *adress;
    int temp;

    first = *head;
    second = (*head)->next;
    temp = second->val;
    second->val = first->val;
    first->val = temp;
    return(first);
}

