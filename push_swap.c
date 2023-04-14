/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 08:56:23 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/14 09:58:51 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[]){

	node *a;
	node *b;
	int i;

	i = 1;

	a = (node *) malloc(sizeof(node));
	b = (node *) malloc(sizeof(node));
	if (!a)
		return 0;
	while(i < argc)
	{
		push_beg(&a, ft_atoi(argv[i]));
		i++;
	}

	printf("A:\n");
	print_Stack(&a);
	printf("B:\n");
	print_Stack(&b);
	printf("\n");
	rotate(&a);
	printf("A:\n");
	print_Stack(&a);
	printf("B:\n");
	print_Stack(&b);
}
