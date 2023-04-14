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
#include "libft_union/union_libft.h"

typedef struct node
{
    int val;
    struct node *next;
}node;

size_t	ft_atoi(const char *str);
void push_beg(node **head, int val);
void push(node **origin, node **dest);
void print_Stack(node **stack);
void swap(node **head);
void rotate(node **head);
int pop(node **head);

#endif
