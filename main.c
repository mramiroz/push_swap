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

int	main(int argc, char *argv[])
{
	t_node *a;
	t_node *b;
	int		size;

	if (argc > 1)
	{
		if (all_ints(argv, argc) == 0 || num_repeated(argv) == 1)
		{
			write(1, "Error\n", 7);
			return (0);
		}
		a = NULL;
		b = NULL;
		size = --argc;
		while (0 < argc)
			create_node(&a, ft_atoi(argv[argc--]));
		if (is_sorted(a) == 1)
			return (0);
		else
		{
			to_positive_stack(&a, size);
			sort(&a, &b, size);
			// print_Stack(&a);
		}
	}
	return (0);
}
