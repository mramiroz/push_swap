/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 08:03:12 by mramiro-          #+#    #+#             */
/*   Updated: 2024/02/16 08:03:12 by mramiro-         ###   ########.fr       */
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
	int i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char **join_nums(char **nums, char **temp, int size, int num_args)
{
	int i;
	int j;
	char **new;

	i = 0;
	new = malloc(sizeof(char *) * (num_args + size + 1));
	if (!new)
		ft_error();
	if (nums != NULL)
	{
		while(nums[i] != NULL)
		{
			new[i] = ft_strdup(nums[i]);
			free(nums[i]);
			i++;
		}
		free(nums);
	}
	j = 0;
	while (j < size)
	{
		new[i + j] = ft_strdup(temp[j]);
		j++;
	}
	new[i + j] = NULL;
	return (new);
}

int double_len(char **argv)
{
	int i;

	i = 0;
	while(argv[i] != NULL)
		i++;
	return (i);
}

char **split_args(char **argv)
{
	char **nums;
	char **temp;
	int size;
	int num_args;
	int i;

	i = 1;
	num_args = 0;
	nums = NULL;
	while (argv[i] != NULL)
	{
		if (argv[i][0] == '\0')
			i++;
		size = 0;
		temp = ft_split(argv[i], ' ');
		if (!temp)
			ft_error();
		size = double_len(temp);
		if (all_ints(temp) == 1)
			ft_error();
		nums = join_nums(nums, temp, size, num_args);
		num_args += size;
		free_double(temp);
		i++;
	}
	return (nums);
}

int	main(int argc, char *argv[])
{
	t_node	*a;
	t_node	*b;
	int		size;
	char	**nums;

	if (argc > 1)
	{
		nums = split_args(argv);
		size = double_len(nums);
		a = NULL;
		b = NULL;
		create_list(&a, nums, size);
		free_double(nums);
		if (is_sorted(a) == 1)
		{
			(free_nodes(&a), free_nodes(&b));
			return (EXIT_SUCCESS);
		}
		if (num_repeated(a) == 1)
			(free_nodes(&a), free_nodes(&b), ft_error());
		else
			(to_positive_stack(&a, size), sort(&a, &b, size));
		free_nodes(&a);
		free_nodes(&b);
	}
	return (EXIT_SUCCESS);
}
