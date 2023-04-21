/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 08:54:08 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/14 08:54:08 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_Stack(node **stack){
    node *actual = *stack;
    if(*stack == NULL)
        return;
    while(actual != NULL){
		printf("Num: %i\n", actual->val);
		actual = actual->next;
	}
}