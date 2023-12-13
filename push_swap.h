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
#include <limits.h>
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
void sort(t_node **stack_a, t_node **stack_b, int argc);
void ra(t_node **stack_a);
void rb(t_node **stack_b);
void sa(t_node **stack_a);
void sb(t_node **stack_b);
void pa(t_node **stack_a, t_node **stack_b);
void pb(t_node **stack_a, t_node **stack_b);
void rra(t_node **stack_a);
void rrb(t_node **stack_b);
void rrr(t_node **stack_a, t_node **stack_b);
void reverse_rotate(t_node **stack);
t_node **order_counts(t_node **stack, t_node *counts, int *size);
int count_bin_digits(int n);
int is_sorted(t_node *stack);
int all_ints(char **argv, int argc);
int num_repeated(char **argv);
void create_list(t_node **a, char **argv, int argc);

#endif
