/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:05:38 by mramiro-          #+#    #+#             */
/*   Updated: 2024/02/18 09:26:42 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 7);
	exit (EXIT_FAILURE);
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

void	free_double(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}
