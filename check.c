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

int all_ints(char **argv, int argc)
{
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        j = 0;
        if (argv[i][j] == '-')
            j++;
        while (argv[i][j] != '\0')
        {
            if (!ft_isdigit(argv[i][j]))
            {
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}

int num_repeated(char **argv)
{
    int i;
    int j;
    char *current;

    i = 1;
    while (argv[i] != NULL)
    {
        j = i + 1;
        current = ft_strdup(argv[i]);
        while (argv[j] != NULL)
        {
            if (ft_strncmp(current, argv[j], ft_strlen(current)) == 0)
            {
                free(current);
                return (1);
            }
            j++;
        }
        free(current);
        i++;
    }
    return (0);
}