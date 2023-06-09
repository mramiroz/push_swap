/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 08:56:18 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/11 08:56:18 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct node
{
    int val;
    int index;
    struct node *next;
}node;

//Utils
void print_Stack(node **stack);

//Moves
void push(node **head, int val);
void pop(node **head);
void swap(node **head);
void push_node(node **src, node **dest);
void rotate(node **head);
void reverse_rotate(node **head);
int is_sorted(node *head);
void sort_short(node **a, node **b);
node	*to_positive_stack(node **stack, int argc);
int	get_min(node *stack, int index);

#endif
