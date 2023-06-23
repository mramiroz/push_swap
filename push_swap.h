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
    struct node *next;
}t_node;


typedef struct Stack
{
    t_node    *top;
}t_stack;
//Utils
void print_Stack(t_node **stack);

//Moves
void create_node(t_node **head, int val);
void pop(t_node **head);
void swap(t_node **head);
void push(t_node **src, t_node **dest);
void rotate(t_node **head);
void reverse_rotate(t_node **head);
int is_sorted(t_node *head);
void sort_small_stack(t_node **a, t_node **b);
void	three_sort(t_node **a);
int	get_max_bin_dig(t_node *node);
t_node	*to_positive_stack(t_node **stack, int argc);
int	get_min(t_node *stack, int index);
t_node	**order_counts(t_node **stack, t_node *iter, int *counts);
int is_one(t_node *head, int digitos);

#endif
