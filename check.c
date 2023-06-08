/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 09:50:21 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/21 09:50:21 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(node *head)
{
    node *a;
    
    a = head;
    while(a->next != NULL && a->val < a->next->val)
        a = a->next;
    if (a->next == NULL)
    {
        printf("Esta ordenado");
        return(1);
    }
    else
        printf("No esta ordenado");
    return(0);
}