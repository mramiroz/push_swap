/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 10:21:37 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/21 10:21:37 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void sort_short(node **a, node **b)
{
    if((*a)->val > (*a)->next->val)
        swap(a);
    else if((*a)->next->val > )
    else if((*a)->val > (*a)->next->next->val)
        reverse_rotate(a);
        //else
        //    a = (*a)->next;

}