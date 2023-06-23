/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 08:56:23 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/21 10:47:36 by mrarmiro-        ###   ########.fr       */
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
	sort_small_stack(&a, &b);
	//print_Stack(&a);
}