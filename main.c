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
	t_node	*a;
	t_node	*b;
	int		size;

	a = NULL;
	b = NULL;
	size = argc - 1;
	argc--;
	while (0 < argc)
		create_node(&a, ft_atoi(argv[argc--]));
	to_positive_stack(&a, size);
	if (is_sorted(a) == 1)
		return (0);
	else
		sort(&a, &b, size);
	ft_putstr_fd("\nResultado:", 2);
	print_Stack(&a);
}
