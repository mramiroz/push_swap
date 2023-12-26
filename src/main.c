/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.co>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 08:56:23 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/10/11 13:32:44 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 7);
	exit (1);
}

void	free_nodes(t_node **a)
{
	t_node	*temp;

	while (*a != NULL)
	{
		temp = *a;
		*a = (*a)->next;
		free(temp);
	}
}

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	int		size;

	if (argc > 1)
	{
		if (all_ints(argv, argc) == 0)
			ft_error();
		a = NULL;
		b = NULL;
		size = --argc;
		create_list(&a, argv, argc);
		if (is_sorted(a) == 1)
		{
			(free_nodes(&a), free_nodes(&b));
			return (0);
		}
		if (num_repeated(a) == 0)
			(free_nodes(&a), free_nodes(&b), ft_error());
		else
			(to_positive_stack(&a, size), sort(&a, &b, size));
		free_nodes(&a);
		free_nodes(&b);
	}
	return (0);
}
