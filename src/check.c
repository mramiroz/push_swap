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
        if (argv[i][j] == '-' && argv[i][j + 1] != '\0')
            j++;
        else if (argv[i][j] == '\0')
            ft_error();
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

int num_repeated(t_node *a)
{
    t_node  *i;
    t_node  *save;
    int     count;

    save = a;
    while(a != NULL)
    {
        i = save;
        count = 0;
        while(i != NULL)
        {
            if (a->val == i->val)
                count++;
            if (count == 2)
                return (0);
            i = i->next;
        }
        a = a->next;
    }
    return (1);
}

void create_list(t_node **a, char **argv, int argc)
{
    int val;
    char *str;

    while(0 < argc)
    {
        val = ft_atoi(argv[argc--]);
        str = ft_itoa(val);
        if (ft_strncmp(str, argv[argc + 1], ft_strlen(argv[argc + 1])) != 0)
        {
            free_nodes(a);
            write(2, "Error\n", 7);
            free(str);
            exit (1);
        }
        free(str);
        create_node(a, val);
    }
}