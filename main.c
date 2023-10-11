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

int main(int argc, char *argv[])
{

	t_node	*a;
	t_node	*b;
	int		size;

	a = NULL;
	b = NULL;
	size = argc;
	argc--;
	while (0 < argc)
		create_node(&a, ft_atoi(argv[argc--]));
	to_positive_stack(&a, size);
	if (a != NULL && a->next != NULL)
		radix_sort(&a, &b, size);
	print_Stack(&a);
}