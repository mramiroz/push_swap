/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrarmiro- <mramiro-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 08:56:23 by mrarmiro-         #+#    #+#             */
/*   Updated: 2023/04/12 17:18:22 by mrarmiro-        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char *argv[]){

	node *a;
	node *b;
	int i;

	i = 1;

	a = (node *) malloc(sizeof(node));
	if (!a)
		return 0;
	while(i < argc)
	{
		push(&a, ft_atoi(argv[i]));
		i++;
	}

	print_Stack(&a);
	a = swap(&a);
	printf("\n");
	print_Stack(&a);
}
