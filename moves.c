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

void push(node **head, int val)
{
    node *new_node;

    new_node = malloc(sizeof(node));
    new_node->val = val;
    new_node->next = *head;
    *head = new_node;
}

void pop(node **head)
{
    node *current;
    
    current = *head;
    *head = (*head)->next;
    free(current);
}

void swap(node **head)
{
    node *first;
    node *second;
    int val;

    if (*head == NULL)
        return;
    first = *head;
    second = (*head)->next;
    val = second->val;
    second->val = first->val;
    first->val = val;
    *head = first;
    printf("swap");
}

void push_node(node **src, node **dest)
{
    int val;

    if (*src == NULL)
        return;
    val = (*src)->val;
    pop(src);
    push(dest, val);
    printf("push");
}

void rotate(node **head)
{
    node *tmp;

    if (*head == NULL)
        return;
    tmp = *head;
    while(tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = malloc(sizeof(node));
    tmp->next->val = (*head)->val ;
    tmp->next->next = NULL;
    pop(head);
    printf("rotate");
}

void reverse_rotate(node **head)
{
    node *tmp;
    node *tmps;

    if(*head == NULL)
        return;
    tmp = *head;
    while (tmp->next->next != NULL)
        tmp = tmp->next;
    tmps = tmp->next;
    tmp->next = NULL;
    push(head, tmps->val);
    free(tmps);
    printf("reverse rotate");
}