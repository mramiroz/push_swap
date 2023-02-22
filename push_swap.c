/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 08:42:18 by mramiro-          #+#    #+#             */
/*   Updated: 2023/02/22 12:16:00 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_strint(int *stack)
{
	int i;

	i = 0;
	while(stack[++i]);
	return (i);
}

int	*ft_swap(int *stack)
{
	int	temp;

	if (ft_strint(stack) == 0 || ft_strint(stack) == 1)
		return (stack);
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
	return (stack);
}

int *ft_rotate(int *stack)
{
	int firstElement;
	int i;
	int len;

	len = ft_strint(stack);
	i = 1;
	firstElement = stack[0];
	while (i < len)
	{
		stack[i - 1] = stack[i];
		i++;
	}
	stack[len - 1] = firstElement;
	return (stack);
}

int *ft_reverseRotate(int *stack)
{
	int lastElement;
	int temp;
	int i;
	int len;

	len = ft_strint(stack) - 1;
	lastElement = stack[len];
	while (len != 0)
	{
		stack[len] = stack[len - 1];
		len--;
	}
	stack[0] = lastElement;
	return (stack);
}

int **ft_push(int **stack, int opt)
{
	if (opt == 0)
	{
		stack[0][0] = stack[1][0];
		stack[1][0] = 0;
		ft_rotate(stack[1]);
	}
	else
	{
		stack[0][0] = stack[1][0];
		stack[1][0] = 0;
		ft_rotate(stack[1]);
	}
	return (stack);
}
int main(int argc, char **argv)
{
	int stack[2][argc];
	int i;
	int x;

	i = 0;
	x = 1;
	while (x < argc)
	{
		stack[0][i] = ft_atoi(argv[x]);
		i++;
		x++;
	}
	stack = ft_push(stack, 1);
	i = 0;
	printf("A B");
	while (i < argc - 1)
	{
		printf("%i ", stack[0][i]);
		printf("%i\n", stack[1][i]);
		i++;
	}
}