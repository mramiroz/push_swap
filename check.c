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

int is_sorted(t_node *head)
{
    t_node *a;

    a = head;
    while(a->next != NULL && a->val < a->next->val)
        a = a->next;
    if (a->next == NULL)
        return(1);
    return(0);
}