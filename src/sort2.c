/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:12:06 by mramiro-          #+#    #+#             */
/*   Updated: 2023/12/14 16:45:25 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *find_min(t_node *a)
{
    t_node *min_node;

    min_node = a;
    while (a != NULL)
    {
        if (a->val < min_node->val)
            min_node = a;
        a = a->next;
    }
    return min_node;
}

int len_stack(t_node *a)
{
    int i;

    i = 0;
    while (a != NULL)
    {
        a = a->next;
        i++;
    }
    return (i);
}

int find_node(t_node *a, int val)
{
    int i;

    i = 0;
    while (a != NULL)
    {
        if (a->val == val)
            return (i);
        a = a->next;
        i++;
    }
    return (-1);
}