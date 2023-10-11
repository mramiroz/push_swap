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
t_node *to_positive_stack(t_node** stack, int argc);
void radix_sort(t_node **a, t_node **b, int argc);
void swap(t_node **head);
void push(t_node **src, t_node **dest);
void rotate(t_node **stack);
void reverse_rotate(t_node **stack);
t_node **order_counts(t_node **stack, t_node *counts, int *size);
int count_bin_digits(int n);

#endif
