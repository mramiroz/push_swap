/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 08:56:23 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/21 09:31:24 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[])
{

	node *a;
	node *b;
	int i;

	i = 1;
	a = NULL;
	b = NULL;
	while(i < argc)
	{
		push(&a, ft_atoi(argv[i]));
		i++;
	}
	printf("A: \n");
	print_Stack(&a);
	printf("B: \n");
	print_Stack(&b);
	reverse_rotate(&a);
	printf("\n");
	printf("A: \n");
	print_Stack(&a);
	printf("B: \n");
	print_Stack(&b);	
}
