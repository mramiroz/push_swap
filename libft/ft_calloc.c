/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramiro- <mramiro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:22:44 by mramiro-          #+#    #+#             */
/*   Updated: 2024/02/18 09:24:51 by mramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*s;
	int		len;

	len = num * size;
	s = malloc (len);
	if (!s || (len && (len / size != num)))
	{
		if (s)
			free(s);
		return (0);
	}
	ft_bzero(s, size * num);
	return (s);
}
