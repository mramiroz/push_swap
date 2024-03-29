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

int	is_sorted(t_node *head)
{
	t_node	*a;

	a = head;
	while (a->next != NULL && a->val < a->next->val)
		a = a->next;
	if (a->next == NULL)
		return (1);
	return (0);
}

int	all_ints(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[i] != NULL)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] == '-' && j == 0)
				j++;
			if (ft_isdigit(argv[i][j]) == 0)
				return (EXIT_FAILURE);
			j++;
		}
		i++;
	}
	return (EXIT_SUCCESS);
}

int	num_repeated(t_node *a)
{
	t_node	*i;
	t_node	*save;
	int		count;

	save = a;
	while (a != NULL)
	{
		i = save;
		count = 0;
		while (i != NULL)
		{
			if (a->val == i->val)
				count++;
			if (count == 2)
				return (EXIT_FAILURE);
			i = i->next;
		}
		a = a->next;
	}
	return (EXIT_SUCCESS);
}

void	create_list(t_node **a, char **argv, int argc)
{
	int		val;
	char	*str;

	argc--;
	while (argc >= 0)
	{
		val = ft_atoi(argv[argc]);
		str = ft_itoa(val);
		if (str == NULL
			|| ft_strncmp(str, argv[argc], ft_strlen(argv[argc])) != 0)
		{
			free_nodes(a);
			write(2, "Error\n", 7);
			free(str);
			exit (EXIT_FAILURE);
		}
		free(str);
		create_node(a, val);
		argc--;
	}
}
