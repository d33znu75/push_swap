/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 21:15:47 by rhmimchi          #+#    #+#             */
/*   Updated: 2023/12/24 23:01:00 by rhmimchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	find_min(t_stack *a)
{
	long	min;
	int		i;

	min = a->list[0];
	i = 0;
	while (i < a->len)
	{
		if (a->list[i] < min)
			min = a->list[i];
		i++;
	}
	return (min);
}

long	find_max(t_stack *a)
{
	long	max;
	int		i;

	max = a->list[0];
	i = 0;
	while (i < a->len)
	{
		if (a->list[i] > max)
			max = a->list[i];
		i++;
	}
	return (max);
}

long	get_index(t_stack t, long num)
{
	int	index;

	index = 0;
	while (t.list[index] != num)
		index++;
	return (index);
}
