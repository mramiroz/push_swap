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

	node *a;
	node *b;

	a = NULL;
	b = NULL;
	argc--;
	while(0 < argc)
		push(&a, ft_atoi(argv[argc--]));
	printf("A: \n");
	print_Stack(&a);
	printf("B: \n");
	print_Stack(&b);
	sort_short(&a, &b);	
	printf("\n");
	printf("A: \n");
	print_Stack(&a);
	printf("B: \n");
	print_Stack(&b);	
	is_sorted(a);
}
