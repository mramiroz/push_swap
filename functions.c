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

void push_beg(node **head, int val)
{
    node *new_node = (node *) malloc(sizeof(node));
    new_node->val = val;
    new_node->next = *head; 
    *head = new_node;
}

void push(node **origin, node **dest){
    push_beg(dest, (*origin)->val);
    pop(origin);
}

void swap(node **head){
    node *first;
    node *second;
    int temp;

    first = *head;
    second = (*head)->next;
    temp = second->val;
    second->val = first->val;
    first->val = temp;
    *head = first;
}

void rotate(node **head){
    node *current;
    node *new_node;
    node *second;

    current = (*head);
    second = (*head)->next;
    new_node = (node *) malloc(sizeof(node));
    new_node->val = (*head)->val;
    new_node->next = NULL;
    while(current->next != NULL)
        current = current->next;
    current->next = new_node;
    pop(head);
    *head = second;
}

void reverse_rotate(node **head)
{
    int val;
    node * current;

    current = (*head);
    while(current->next != NULL)
        current = current->next;
    
}

int pop(node **head)
{
    int rval = -1;
    node *next_node = NULL;
    
    next_node = (*head)->next;
    rval = (*head)->val;
    free(*head);
    *head = next_node;
    return (rval);
}

